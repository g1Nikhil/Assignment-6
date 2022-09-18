#include<stdio.h>

int main()
{
    int n,factorial = 1;
    int sum =0;
    printf("enter any number");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        factorial*=i;

        
    }
    printf("Sum of numbers are = %d",factorial);
    return 0;
}