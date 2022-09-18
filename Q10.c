#include<stdio.h>

int main()
{
    int n,reverse = 0;
    printf("enter the value of n");
    scanf("%d",&n);

    while (n>0)
    {
        int lastdigit = n % 10;
     reverse = reverse*10 + lastdigit;
       n = n/10;
    }
    
    printf("Laast digit is =%d",reverse);

    return 0;
}