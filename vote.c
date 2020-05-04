#include<stdio.h>
int main()
{
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible to vote");
    }else{
        printf("sorry you cant vote");
    }
    return(0);
}
