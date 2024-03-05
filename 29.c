#include<stdio.h>
#include<string.h>
int count(char,char,int);
int main()
{
  char s,a[50];
printf("enter search key:");
scanf("%c",&s);
printf("enter array:");
scanf("%s",a);
int len=strlen(a);
int res=count(a,s,len);
printf("%d",res);
return 0;
}
int count(arr[],s,l)
{
  int t=-1,i;
for(i=0;i<l;i++)
{
if (a[i]==s)
{
t=i;
}
}
return t;
}
