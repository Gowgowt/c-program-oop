#include<stdio.h>
int sum ();
int main ()

{
sum ();

}
int sum()
{
int num1,num2,result;
printf ("Enter the two number :");
scanf("%d%d",&num1,&num2);
result=num1+num2;
printf ("result :%d",result);
}