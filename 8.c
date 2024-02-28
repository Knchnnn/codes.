#include<stdio.h>
int main(){
int a[10][10], b[10][10], c[10][10], i, j,a, b, a1, b1;
printf("input rows and columns of matrix 1 and 2:");
scanf("%d%d%d%d",&a&b&a1&b1);
if (a==a1&& b==b1)
{
for (i=0; i<a; i++)
{
for (j=0; j<b;j++)
{
scanf("%d", &a[i][j]);
}
}
for(i=0;i<a1;i++)
{
for(j=0;j<b1;j++)
{
scanf("%d",&b[i][j]);
}
}
for (i=0; i<a; i++)
{
for(j=0; j<b;j++)
{
c[i][j]= a[i][j]-b[i][j];
printf("%d", c[i][j]);
}
}
}
else 
{
 printf("substraction not allowed ");
}
return 0;
}
