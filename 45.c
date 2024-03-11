#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],*p;
    printf("enter a string:");
    fgets(s,100,stdin);
    int l=strlen(s);
    p=s;
    for(int i=0;i<l;i++)
    {
        printf("%c",*(p+i));
    }
    return 0;
}
