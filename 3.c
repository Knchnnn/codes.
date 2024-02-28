#include<stdio.h>
void prime(int)
int display()
int count=0;
int main()
{
int a[100],i,n,res;
printf("enter no. of array elements");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
prime(a[i]);
}
res=display();
printf("total no. of prime number is %d",res);
return 0;
}
void prime(int m)
{
int i,c=0;
for(i=2;i<m;i++)
{
if (m%i==0)
c++;
}
if(c==0)
{
count++;
printf("%d is a prime no.\n",m);
}
}
int display();
{
return count;
}
