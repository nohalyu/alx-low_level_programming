#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/* main-Entry point */
/* Return always 0 (success) */
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
/* checkes if the following boolean value is true */
if (n > 0)
printf("%d is positive\n", n);
/* Checks another boolean value */
else
if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
