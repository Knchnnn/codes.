#include <stdio.h>

int main() {
    int a[10],n,i,*p,sum=0;
    printf("input limit:");
    scanf("%d",&n);
    p=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("%d",sum);
    return 0;
}
