#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last number and whether it is greater than 5, 0, less than 6
 *
 * Return:0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10) > 5)
{
printf("The last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else
{
printf("The last digit of %d is %d 0\n", n, n % 10);
}
else if
{
printf("The last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
return (0);
