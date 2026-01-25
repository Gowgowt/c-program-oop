#include<stdio.h>
void sum();
void sub();
void mul();
void div();
int main()
{
//int limet[100];
int i,y;
//ptintf("limet of number:");
//scanf("%d",&limet);
printf("\t1: || addcationm  ||\n");
printf("\t2: || subration   ||\n");
printf("\t3: || multiplation||\n");
printf("\t4: || divation    ||\n");
printf("\n-----------------------------\n");
for(i=0;i<10;i++)
{
printf("time of calling opration :");
scanf("%d",&i);
if(i<=4)
{
printf("\nchiose the number :");
scanf("%d",&y);
}
switch (y)
{
case 1:
sum();
break;
case 2:
sub();
break;
case 3:
mul();
break;
case 4:
div();
break;
default:
printf("not fund");
return 0;
}
}

}
void sum ()

{
int num1,num2;
int result;
printf("Enter the two value :");
scanf("%d%d",&num1,&num2);
result=num1+num2;
printf("addcation:%d",result);
}
void sub()
{
int num1,num2;
int result;
printf("Enter the two value :");
scanf("%d%d",&num1,&num2);
result=num1-num2;
printf("subrater:%d",result);
}
void mul ()
{
int num1,num2;
int result;
printf("Enter the two value :");
scanf("%d%d",&num1,&num2);
result=num1*num2;
printf("multpalition:%d",result);
}
void div ()
{
int num1,num2;
int result;
printf("Enter the two value :");
scanf("%d%d",&num1,&num2);
result=num1%num2;
printf("divation :%d",result);
}