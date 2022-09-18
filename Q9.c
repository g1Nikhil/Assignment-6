#include<stdio.h>

int main()
{
    int num1,num2;
    int i;

    printf("enter num1 = ");
    scanf("%d",&num1);

    printf("enter num2 = ");
    scanf("%d",&num2);

    for ( i = 1; i <= num1*num2; i++)
    {
        if((i%num1==0) && (i%num2==0))
        {
            break;
        }
    }
    printf("the LCM = %d",i);
    
    return 0;
    
}