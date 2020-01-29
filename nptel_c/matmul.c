#include<stdio.h>

main(){
  int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2, i, j;
  printf("Enter the number of rows \n");
  scanf("%d",&r1);
  printf("Enter the number of columns \n");
  scanf("%d",&c1);
  printf("Please enter the %d elements \n",r1*c1);
  for ( i = 0 ; i < c1 ; i++ ) {
    for ( j = 0 ; j < r1 ; j++ ) {
      scanf("%d",&a[i][j]);
    }
  }
  r2 = c1;
  printf("Enter the number of columns for second matrix \n");
  scanf("%d",&c2);
  printf("Please enter the %d elements \n", r2*c2);
  for ( i = 0 ; i < c2 ; i++ ) {
    for ( j = 0 ; j < r2 ; j++) {
      scanf("%d",&b[i][j]);
    }
  }
  for ( i = 0 ; i < c2 ; i++ ) {
    for ( j = 0 ; j < r1 ; j++ ) {
      c[i][j] = 0;
      for (int k = 0; k < c1 ; k++ ) {
        c[i][j] = a[i][k]*b[k][j] + c[i][j];
      }
    }
  }
  printf("The first matrix is\n");
  for( i = 0 ; i < c1 ; i++ ) {
    for( j = 0 ; j < r1 ; j++) {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("The second matrix is\n");
  for( i = 0 ; i < c2 ; i++ ) {
    for( j = 0 ; j < r2 ; j++) {
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
  printf("The result matrix is\n");
  for( i = 0 ; i < c2 ; i++ ) {
    for( j = 0 ; j < r1 ; j++) {
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
}
