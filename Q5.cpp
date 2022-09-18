#include<stdio.h>

int main()
{
    int n;
    int sum =0;
    printf("enter any number");
    scanf("%d",&n);

    for (int i = 1; i <= n; i+=2)
    {
       sum = sum + i*i*i; 
    }
    printf("Sum of numbers are = %d",sum);
    return 0;
}