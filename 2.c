#include<stdio.h>
longdoublefact(longdouble)
int main()
{
int n,res;
printf("enter a number");
scanf("%d",&n);
res=fact(n);
printf("%d",res);
return 0;
}
longdoublefact(longdouble n)
{
if(n==0)
{
return 0;
}
else
{
return(n*fact(n-1))
}
}
