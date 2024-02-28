#include<stdio.h>
void pal(int);
int main()
{
int a[100],i,n;
printf("enter no. of elements;");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
pal(a[i]);
}
return 0;
}
void pal(int n)
{
int rem,rev=0,m;
m=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(m==rev)
{
printf("%d is a palindrome no.",m);
}
}

