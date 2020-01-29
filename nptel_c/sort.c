#include<stdio.h>

main(){
  int arr[100];
  int n,number;
  printf("Please enter the number of elements in the array \n");
  scanf("%d",&n);
  if(n>0){
    for(int i = 0; i < n ; i++ ){
      scanf("%d",&number);
      arr[i] = number;
    }
    for(int i = 0 ; i < n ; i++ ){
      for(int j = i ; j < n ; j++){
        int temp;
        if(arr[i] > arr[j]){
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }
    printf("The sorted array is \n");
    for(int i = 0 ; i < n ; i++ ){
      printf("%d \t",arr[i]);
    }
    printf("\n");
  }
}
