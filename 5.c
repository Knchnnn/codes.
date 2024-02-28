#include<stdio.h>
int main()
{
int a[100],n,i,j,temp;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a{i]);
}
for(i=0,j=n-1;i<n/2;i++,j--)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("new array is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
