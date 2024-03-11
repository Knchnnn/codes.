#include<stdio.h>
#include<string.h>
void merge(char *,char *);
int main()
{
    char s1[50],s2[50];
    printf("enter string 1 and string 2:");
    fgets(s1,50,stdin);
    fgets(s2,50,stdin);
    merge(s1,s2);
    return 0;
}
void merge(char *a,char *b)
{
    int l1,l2,i,t=0;
    l1=strlen(a);
    l2=strlen(b);
    if(l1==l2)
    {
        for(i=l1-1;i!=(l1+l2);i++)
        {
            a[i]=b[t];
            t++;
        }
        puts(a);
    }
    else
    {
        printf("strings are not equal");
    }
}
