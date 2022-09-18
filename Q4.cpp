#include<stdio.h>

int main()
{
    int n,square;
    int sum =0;
    printf("enter any number");
    scanf("%d",&n);

    for (int i = 0; i <= n; i+=2)
    {
        square = i*i;
       sum = sum + square; 
    }
    printf("Sum of numbers are = %d",sum);
    return 0;
}