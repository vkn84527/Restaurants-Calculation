#include<stdio.h>
#include <stdlib.h>
int p=0;
void burrger()
{
    int n,t;
 printf("how many pices u want :");
 scanf("%d",&n);
 t=n*100;
 p=p+t;
 printf("Total price of burrger is= %d\n",t);
}
void pizza()
{
    int v,k;
 printf("how many pices u want :");
 scanf("%d",&v);
 k=v*50;
 p=p+k;
 printf("Total price of pizza is= %d\n",k);
}
void jush()
{
    int a,b;
 printf("how many pices u want :");
 scanf("%d",&b);
 a=b*40;
 p=p+a;
 printf("Total price of jush is =%d\n",a);
}
void shake()
{
    int n,m;
 printf("how many pices u want :");
 scanf("%d",&n);
 m=n*20;
 p=p+m;
 printf("Total price of shake is = %d\n",m);
}

int main()
{
 int c;
printf("\n1.burrger - 100");
printf("\n2.pizza - 50");
printf("\n3.shake - 20 ");
printf("\n4.jush -40");
printf("\n5.exit\n\n");
 while(1)
 {
 printf("enter the your choice :");
 scanf("%d",&c);
 if(c==5)
    printf("Total bill of you is :%d",p);
    printf("\n");
 switch(c)
 {
   case 1: burrger();break;
   case 2: pizza();break;
   case 3: shake();break;
   case 4: jush();break;
   case 5: exit(0);break;
   default: printf("wrong choice\n");
 }
}
}
