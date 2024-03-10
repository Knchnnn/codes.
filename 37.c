#include<stdio.h>
void desc(int *,int);
int main()
{
    int a[10],n;
    printf("enter array size:");
    scanf("%d",&n);
    desc(a,n);
    return 0;
}
void desc(int *p,int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(p+j)<*(p+j+1))
            {
                t=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}
