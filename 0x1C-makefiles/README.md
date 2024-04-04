# 0x1C. C - Makefiles

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are make, Makefiles
When, why and how to use Makefiles
What are rules and how to set and use them
What are explicit and implicit rules
What are the most common / useful rules
What are variables and how to set and use them

Requirements
General
Allowed editors: vi, vim, emacs
OS: Ubuntu 20.04 LTS
Version of gcc: 9.3.0
Version of make: GNU Make 4.2.1
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory

## TIPS/PERSONAL STUDY

## Installing make on Ubuntu
- First updated my terminal: sudo apt install
- Secondly, checked if I have 'make' installed: make -version
- If not: sudo apt install make
- Next, check the make directory on the system so we can use its package: ls /usr/bin/make

## What is makefile and how does it work
To run or update a task where some files have changed, the make utility can be used. The make utility uses a file (Makefile or makefile) that contains a set of task(s) to be executed. make utility can be used to compile binary executables of open source projects: Use 'make install'
Note: Prerequiste -> Makefile(with command), 'make', prerequisite/dependencies, recipe
In the Makefile, the statement before the semi-colon behaves like a function. This is called a target. The receipe uses prerequisites to make a target. The receipe, prerequisite and target make up what is called the rule.
SUMMARY
target:prerequisite
<tab> receipe
Note: Targets may be binary files that depend on prerequistes(source files). Also, prequisites can be target that depend on other dependecies.
Also, it is not complusory for the target to be a file, it could be just a name used by the receipe. Such instances or targets are known as 'phony target'

## Suppressing the commands of makefiles
If the commands in the makefile should not be displayed, or we dont want that, we can suppress it by using an @ in front of the command. 
eg: @echo "Hello World" -> This just displays the output without the command

## Adding/Multiple rules.
- THe first target is the default target(default goal)
- In a case of multiple target names, only the first target command is accessed and its output displayed.
- Because of this, in cases of multiple target names, 'all' is usually the first target.
- It is the responsibility of all to call other targets.
- 'all' can be overridden as the default target(default goal) of 'phony targets' by using the .DEFAULT_GOAL command.
Eg .DEFAULT_GOAL:= generate
Note: The above command overides other targets regardless if they come first and makes 'generate' the 'default goal/target'
DRAWBACK: The '.DEFAULT_GOAL' can only run a single target at a time. This is resolved by replacing '.DEFAULT_GOAL' with 'all' target.
* There is also a special phony target command '.PHONY'. This is where all targets that are not files are defined. It runs their receipe regardless of whether they are files and time of modification.
Note: It is a good practice not to call clean in all or put it as the first target. clean should be called manually when cleaning is needed as a first argument to make:
'make clean'

##Advanced Examples/Concepts
In the above examples, most of the target and prerequisites are hard-coded and not variables. In real projects they will be represented/replaced by variables and expressions.

* Variable declaration (Assignment operator '=')
CC = gcc
* This is also called a recursively expanded variable as shown bellow
hello: hello.c
	${CC} hello.c -o hello
The above code results to the following on the terminal
'gcc hello.c -o hello'
Both ${CC} and $(CC) are valid references to gcc. But if one tries to reassign a variable to itself, it causes an infinite loop(Run/Study code's output for error message

To avoid this scenario, (simple expanded operator '=') should be used instead.

## Patterns and Functions

