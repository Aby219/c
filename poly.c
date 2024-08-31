#include<stdio.h>
struct poly
{
int coeff,exp;
};
void main()
{
struct poly x[15];
int term,i;
printf("enter the no of terms");
scanf("%d",&term);
printf("enter the coefficient and exponent in descending order:");
for(i=0;i<term;i++)
{
printf("coef");
scanf("%d",&x[i].coeff);
printf("exponontial");
scanf("%d",&x[i].exp);
}
printf("the polynomial is ");
for(i=0;i<term;i++)
{
printf("(%dx^%d)",x[i].coeff,x[i].exp);
if(i<term-1)
{
printf("+");
}
}
}
