#include<stdio.h>
int main()
{
    int l1,l2,*c[200],*a[100],*b[100],i,j;
    printf("enter length:");
    scanf("%d%d",&l1,&l2);
    printf("enter array 1:");
    for(i=0;i<l1;i++)
    {
        scanf("%d",a+i);
    }
    printf("enter array 2:");
    for(i=0;i<l2;i++)
    {
        scanf("%d",b+i);
    }
    for(i=0;i<l1;i++)
    {
        *(c+i)=*(a+i);
    }
    for(i=l1;i<(l1+l2);i++)
    {
        *(c+i)=*(b+i);
    }
    printf("merge array:");
    for(i=0;i<(l1+l2);i++)
    {
        printf("%d",*(c+i));
    }
    printf("\n");
    return 0;
}
