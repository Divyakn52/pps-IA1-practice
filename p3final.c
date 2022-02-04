#include<stdio.h>
int input_n()
{
  int n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=1;n>=i;i++)
  sum=sum+i;
  return sum;
}
void output(int n,int sum)
{
  int i;
  printf("1");
  for(i=2;n>=i;i++)
 { 
   printf("+%d",i);
 }
 printf("=%d",sum)
}
int main()
{
  int x,y;
  x=input_n();
  y=sum_n(x);
  output(x,y);
  return 0;
}
