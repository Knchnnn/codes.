#include<stdio.h>
#include<string.h>
void fre(char);
int main()
{
  char a[100];
printf("enter a string:");
fgets(a,100,stdin);
fre(a);
return 0;
}
void fre(char s[])
{
  int i,j,l,fre;
l=strlen(s);
for(i=0;i<l;i++)
{
fre=1;
if((a[i]!='\0')
{
for(j=i+1;j<l;j++)
{
if(a[i]==a[j])
{
fre++;
a[j]='\0';
}
}
printf("%c occurs %d times",a[i],fre);
}
}
}
