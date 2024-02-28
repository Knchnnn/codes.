#include<stdio.h>
#include<string.h>
int main()
{
  char s1[50],s2[50];
int eq=1;
printf("enter string 1:");
fgets(s1,50,stdin);
printf("enter string 2:");
fgets(s2,50,stdin);
int i=0;
while(s1[i]!='\0'||s2[i]!='\0')
{
eq=0;
break;
i++;
}
if(eq==1)
{
int i=0;
while(s2[i]!='\0')
{
s1[i]=s2[i];
i++;
}
s1[i]='\0';
puts(s1);
}
else
{
printf("the strings are not equal);
}
  return 0;
}
