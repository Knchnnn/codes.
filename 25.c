#include<stdio.h>
#include<string.h>
int main()
{
  char a[50],b[50];
printf("enter srting 1:");
fgets(a,50,stdin);
printf("enter string 2:");
fgets(b,50,stdin);
int i=0;
while(a[i]!='\0');
{
i++;
}
int j=0;
while(b[j]!='\0')
{
a[i]=b[j];
i++;
j++;
}
a[i]='\0';
puts(a);
return 0;
}
