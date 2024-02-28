#include <stdio.h>
#include<string.h>
void count(char a[]);
int main() 
{
char s[100];
printf("enter a string:");
fgets(s,100,stdin);
count(s);
return 0;
}
void count(char a[])
{
int v=0,c=0,i;
i=0;
while (a[i]!='\0')
{
    if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='u'||a[i]=='i')
    {
        v++;
    }
    else
    {
        c++;
    }
    i++;
}
printf("vowels-%d & consonant-%d",v,c);
}
