#include<stdio.h>
int main ()
{
int a=100;
int *p,**r;
p=&a;
printf(" value of a        :%d\n",a);
printf(" address of a      :%d\n",&a);
printf(" value of p        :%d\n",p);
printf(" address of p      :%d\n",&p);
printf(" dereferencing     :%d\n",*p);
printf("-------------------------------------------\n");
r=&p;
printf(" value of p        :%d\n",a);
printf(" address of p      :%d\n",&a);
printf(" value of r        :%d\n",p);
printf(" address of r      :%d\n",&p);
printf(" dereferencing     :%d\n",**r);
}