#include<stdio.h>
#include<string.h>
int find(char,char);
int main()
{
char s[100],v;
int res;
printf("enter a string:");
fgets(s,100,stdin);
printf("enter a value:");
scanf("%c",&v);
res=finf(a,v);
if(res!=1)
{
printf("the value %c is presented index %d\n",v,res);
}
else
{
printf("value not found");
}
return 0;
}
int find(char a[],char v)
{
int i,l;
l=strlen(a);
for(i=0;i<l;i++);
{
if (a[i]==v)
{
return i;
}
else
{
return -1;
}
}
}
