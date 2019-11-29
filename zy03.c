#include<stdio.h>
int main(void)
{
  int x,y,a,b,s;

  printf("Enter x,a:\n");
  scanf("%d,%d,%d,%d,%d,%d",&x,&y,&a,&b,&s);
 
  if(x<=3){
      y=10;
  }
  if(3<x<=13){
      y=10+2*(x-3);
  }
  if(x>13){
      y=30+3*(x-13);
  }
  if(a<=5){
      b=0;
  }else{
      b=a/5*2;
  }
s=(y+b);
  printf("S is %d.\n",s);

  return 0;
}