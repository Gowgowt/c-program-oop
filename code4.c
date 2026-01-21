#include <stdio.h>
int main ()
{
int numberlimet,arr[100],i,even,odd;
printf ("Enter the number limet :");
scanf ("%d",&numberlimet);
for (i=0;i<numberlimet;i++){
scanf("%d",&arr[i]);
printf("-------elemet of number --------\n");
for(i=0;i<numberlimet;i++)
{
if(arr[i] %2==0)
{even++;
}
else
{
odd++;
}
}
printf("even number :%d\n",even);
printf("odd number :%d\n",odd);
printf("not number");
}
return 0;
}
