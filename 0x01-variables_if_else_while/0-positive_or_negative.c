#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
 *
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%x is zero/n", n);
}

else if (n < 0)
{
printf("%x is negative/n", n);
}

else
{
printf("%x is positive/n", n);
}

return (0);
}
