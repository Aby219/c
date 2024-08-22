#include<stdio.h>
void main()
{
int a[10],i,j,min,n,temp;
printf("enter the total no of elements:");
scanf("%d",&n);

printf("enter the elements of the array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
if(i!=min)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
printf("elements are:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}


