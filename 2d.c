#include<stdio.h>
int main()
{
    int i=0,j=0;
    int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("the array is [%d][%d]=%d",arr[i][j]);
        }
    }
}
