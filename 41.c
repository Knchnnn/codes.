#include <stdio.h>
#include<string.h>
void pal(char*,int);
int main() 
{
    char s1[100],s2[100];
    int l1,l2;
    printf("enter string1 and string2:");
    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    l1=strlen(s1);
    l2=strlen(s2);
    pal(s1,l1-1);
    pal(s2,l2-1);
    return 0;
}
void pal(char *a,int l)
{
int i,f=0;
for(i=0;i<l/2;i++)
{
    if(*(a+i)!=*(a+l-1-i))
    {
        f++;
    }
}
if(f==0)
{
    printf("pallindrome");
}
else
{
    printf("not pallindrome");
}

}
