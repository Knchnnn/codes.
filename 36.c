#include<stdio.h>
int main()
{
    int a[10],n,i,j,*p,t;
    printf("enter array size:");
    scanf("%d",&n);
    p=a;
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
    return 0;
}
