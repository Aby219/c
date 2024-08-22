#include<stdio.h>
void main()
{
int a[10],i,j,min,n,temp;
printf("enter the total no of elements:");
scanf("%d",&n);

printf("enter the elements of the array:");
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0&&a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("the sorted elements are\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}

