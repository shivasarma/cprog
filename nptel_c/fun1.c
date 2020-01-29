#include<stdio.h>

main(){
  int a=1,b=2,c=3;
  printf("Before calling the function fun1 \n a=%d, b=%d, c=%d\n",a,b,c);
  fun1(a,b,c);
  printf("After calling the function fun1 \n a = %d, b=%d, c=%d\n",a,b,c);
}

fun1(i,j,k)
int i,j,k;{
  i = 21;
  j = 22;
  k = 23;
  printf("Inside the function the values of i = %d;  j=%d, k=%d\n",i,j,k);
}
