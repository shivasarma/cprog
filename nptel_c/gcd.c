#include<stdio.h>

main(){
  int num1,num2,gcd;
  printf("Enter both the numbers \n");
  scanf("%d",&num1);
  scanf("%d",&num2);
  gcd = gcdfun(num1,num2);
  printf("%d",gcd);
}

int gcdfun( int a, int b){
  int rem,gcd1;
  if( a < b ){
    if ( a%b == 0 ){ gcd1 = a; }
    else{ rem = a%b ; gcd1 = gcdfun(rem,a); }
  }
  else{ gcd1 = gcdfun(b,a); }

  return gcd1;
}
