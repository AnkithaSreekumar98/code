#include<stdio.h>
int fact(int);
int main()
{
    int num,res;
    printf("enter the number");
    scanf("%d",&num);
    res=fact(num);
    printf("the factorial is%d",res);
}
int fact(int num)
{
    if(num==0)
    {
        return 0;
    }else{
    return num*fact(num-1);
    }
}
