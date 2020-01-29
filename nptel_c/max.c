#include<stdio.h>

main(){
  int max, number,n;
  printf("Enter the number of elements you will to enter \n");
  scanf("%d",&n);
  if(n > 0){
    scanf("%d",&number);
    max = number;
    for( int i = 1 ; i < n ; i++ ){
      scanf("%d",&number);
      max = maximum(max,number);
    }
    printf("The maximum number is %d \n",max);
  }

}

int maximum(int number1,int number2){
  if(number1 > number2){
    return number1;
  }
  else{
    return number2;
  }
}
