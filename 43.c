#include<stdio.h>
#include<string.h>
void sort(char[],int);
int compare(char[],char[],int,int);
int main()
{
    char s1[20],s2[20];
    int l1,l2,res;
    printf("input 2 string:\n");
    fgets(s1,20,stdin);
    fgets(s2,20,stdin);
    l1=strlen(s1);
    l2=strlen(s2);
    sort(s1,l1);
    sort(s2,l2);
    res=compare(s1,s2,l1,l2);
    if(res==0)
    {
        printf("anagram\n");
    }
    else
    {
        printf("not anagram");
    }
    return 0;
}
void sort(char s[],int l)
{
    int i,j;
    char t;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(s[j]<s[j+1])
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
}
int compare(char s1[],char s2[],int l1,int l2)
{
    int f=0,t,i;
    for(i=0;i<l1;i++)
    {
        if(s1[i]!=s2[i])
        {
            f=1;
            break;
        }
    }
    return f;
}
