#include<stdio.h>
int main ()
{
int martix1 [2][4];
int i,j,colum,row;
printf("Enter the number of row :");
scanf("%d",&row);
printf("Enter the number of clome :");
scanf("%d",&colum);
for (i=0;i<row;i++){
for (j=0;j<colum;j++){
printf("Enter the value of position:%d%d",i,j);
scanf ("%d",martix1[i][j]);
}
}
printf ("\n ------the elemenet------\n");
for (i=0;i<row;i++)
{
for(j=0;j<colum;j++)
{
printf("\t",martix1[i][j]);

}
printf("\n");
};
return 0;
}
