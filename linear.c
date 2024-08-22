#include<stdio.h>
void main()
{
int a[7],flag=0,i,element,t;
t++;
printf("enter the elements:");
t++;
for(i=0;i<5;i++)
{
t++;
scanf("%d",&a[i]);
t++;
}
t++;
printf("enter the elements to be searched");
t++;
scanf("%d",&element);
t++;
t++;
for(i=0;i<5;i++)
{
t++;
if(a[i]==element)
{
t++;
t++;
printf("the element found at %d\n",i+1);
flag=1;
t++;
}
}
t++;
if (flag==0)
{
printf("the element not found\n");
t++;
}
else
{
t++;
}
printf("space complexity is %d",(4*4)+(i*4));
printf("time complexity is %d",t);
}

