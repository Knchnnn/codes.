#include<stdio.h>
int main()
{
    int a[100],n,*p,odd=0,even=0,i;
    printf("enter array size:");
    scanf("%d",&n);
    p=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("even=%d,odd=%d",even,odd);
    return 0;
    }
