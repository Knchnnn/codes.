#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char s[100],*p,t;
    printf("enter a string:");
    fgets(s,100,stdin);
    l=strlen(s);
    p=s;
    for(i=0,j=l-1;i<j;i++,j--)
    {
        t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
    }
    for(i=0;i<l;i++)
    {
        printf("%c",*(p+i));
    }
    return 0;
}
