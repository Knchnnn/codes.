#include<stdio.h>
#include<string.h>
void remove(char);
int main()
{
char s[100];
printf("enter a string with spaces:");
fgets(s,100,stdin);
remove(s);
return 0;
}
void remove(char a[])
{
int c=0;i,l;
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]!=' '&&a[i]!='\t')
{
a[c++]=a[i];
}
}
a[c]='\0';
}
