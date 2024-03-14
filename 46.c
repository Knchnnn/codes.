#include<stdio.h>
#include<string.h>
int main()
{
int l,i;
char a[100],b[100];
printf("enter two strings:");
fgets(a,100,stdin);
fgets(b,100,stdin);
l=strlen(a);
i=0;
while(b[i]!='\0')
{
    a[l-1]=b[i];
    l++;
    i++;
}
a[l]='\0';
puts(a);
return 0;
}
