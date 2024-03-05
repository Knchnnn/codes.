#include<stdio.h>
int main()
{
  char c,*pc;
double p,*pp;
float f,*pf;
int i,*pi;
*pi=i;
  *pf=f;
  *pp=p;
  *pc=c;
printf("%d%d",i,*pi);
printf("%c%c",c,*pc);
printf("%f%f",f,*pf);
printf("%lf%lf",p,*pp);
return 0;
}
