# Outpt
# make 		Compile binaries
# make clean	Remove objects and binaries

.PHONY: all clean

CC = gcc

LINKERFLAG = -lm

SCRS := school.c
BIN := school

all: school

school:school.o
	@echo "Checking"
	${CC} ${LINKERFLAF} $< -o $@

school.o:school.c
	@echo "Creating"
	${CC} -c $<

clean:
	@echo "Removing files"
	rm -rvf school.o school
