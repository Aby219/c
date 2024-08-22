#include<stdio.h>
void main()
{
int i,j,r,c,k,a[100][100],b[100][3];
printf("enter the no of rows and columns:");
scanf("%d%d",&r,&c);
printf("enter the elements:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the entered matrix is\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
k=1;
b[0][0]=r;
b[0][1]=c;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=0)
{
b[k][0]=i;
b[k][1]=j;
b[k][2]=a[i][j];
k++;
}
}
}
b[0][2]=k-1;
printf("the sparse matrix is \n");
for(i=0;i<k;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
}
