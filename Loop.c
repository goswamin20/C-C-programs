#include<stdio.h>
int main()
{
    int i = 0;
    int sum = 0;
    int step = 2;
    for ( i = 0; i < 10; i++)
    {
 	sum += step;
    }
    printf ("loop for %d times, with step = %d, sum=%d\n",i,step,sum);
}


