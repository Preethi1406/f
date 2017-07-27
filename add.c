#include<stdio.h>
#include<conio.h>
void main()
{
 int *p1,*p2;
 int num;
 printf("Enter two numbers..");
 scanf("%d%d",p1,p2);
 num=*p1+*p2;
 printf("Sum=%d",num);
 return(0);
}
