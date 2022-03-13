#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int n, l;
unsigned int Lap;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
Lap = n % 10;
if (l > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
	else
if (l < 6)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
	else
if (Lap == 6)
{
	printf("Last digit of %d is %d  and is 0\n", n, l);
}
return (0);
}
