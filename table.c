#include<stdio.h>
int main()
{
    int i=1, num=0;
    printf("enter the number");
    scanf("%d",&num);
    do{
        printf("%d",(num*i));
        i++;
    }while(num<=10);
    return(0);
}
