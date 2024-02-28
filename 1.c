#include<stdio.h>
int sod(int)
int main()
{
int n,res;
printf("enter the number;");
scanf("%d",&n);
res=sod(n);
printf("%d",res);
return 0;
}
int sod(int n)
{
if(n==0)
{
return 0;
}
else
{
return(n%10+sod(n/10));
}
}
