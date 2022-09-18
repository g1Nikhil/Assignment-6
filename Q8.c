#include<stdio.h>

int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);

    for (int i = 2; i<= n; i++)
    {
       if(n%2==0)
       printf("the given number is not prime");

       else
       printf("the given number is prime");

       break;
    }
    
    return 0;
}