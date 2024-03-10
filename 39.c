#include<stdio.h>
void rev(int *,int);
int main()
{
    int a[10],n;
    printf("enter array size:");
    scanf("%d",&n);
    rev(a,n);
    return 0;
}
void rev(int *p,int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0,j=n-1;i<j;i++,j--)
    {
        t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}
