#include<stdio.h>
int main()
{
    int i,j, num[3][5];
    for (i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("enter the values %d",i,j);
            scanf("%d",&num[i][j]);
        }
        printf("\n");
    }
    printf("printing elements");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    return(0);
}
