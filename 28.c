#include<stdio.h>
#include<string.h>
void merge(char,char);
int main()
{
char s1[50],s2[50];
printf("enter string 1 and 2:");
fgets(s1,50,stdin);
fgets(s2,50,stdin);
merge(s1,s2);
return 0;
}
void merge(char a[],charb[])
{
  int i,t=0,l1,l2;
l1=strlen(a);
l2=strlen(b);
for(i=0;l1-1;i!=(l1+l2);i++)
{
a[i]=b[t];
}
puts(a);
}
