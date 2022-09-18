#include<stdio.h>

int main()
{
    int n;
    int sum =0;
    printf("enter any number");
    scanf("%d",&n);

    for (int i = 1; i <= n; i+=2)
    {
        if(i%2==1)
       sum = sum + i; 
    }
    printf("Sum of numbers are = %d",sum);
    return 0;
}