#include<stdio.h>
int main()
{
int i,n,x,flag,time;
printf("enter the number of elements:");
scanf("%d",&n);
time++;
int a[n],mid,left=0,right=n-1;
time++;
time++;
printf("enter the elements:");
time++;
for(i=0;i<n;i++)
{
time++;
scanf("%d",&a[i]);
time++;
}
printf("enter the element to be searched:");
time++;
scanf("%d",&x);
time++;
while(left<=right){
time++;
mid=(left+right)/2;
time++;
if(x==a[mid]){
flag=1;
time++;
break;
}
else if(x>a[mid]){
right=mid-1;
time++;
}
}
if(flag==0){
time++;
printf("element not found\n");
time++;
}
else if(flag==1){
printf("element found at location %d in ",mid+1);
time++;
}
time++;
printf("space complexity=%d\n time complexity=%d\n",32+(4*n),time);
}


