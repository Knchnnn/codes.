#include<stdio.h>
#include<string.h>
void rotate(char);
int main()
{
char s[100];
printf("enter a string:");
fgets(s,100,stdin);
rotate(a);
puts(a);
return 0;
}
void rotate(char a[])
{
  char temp;
int i,l;
l=strlen(a);
for(i=0;i<l;i++)
{
a[i]=a[i+1];
}
a[l-1]=temp;
}
