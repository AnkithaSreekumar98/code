#include<stdio.h>
int main()
{
    int num1;
    printf("enter the number");
    scanf("%d",&num1);
    if(num1%2==0)
    {
        printf("entered number is even");
    }else{
    printf("entered number is odd");
    }
    return(0);
}
