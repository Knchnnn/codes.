#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swaping a=%d,b=%d",x,y);
}
