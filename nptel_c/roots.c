#include<stdio.h>
#include<math.h>

main(){
  float a,b,c,r1,r2,imag;
  printf("Enter the coefficients \n");
  scanf("%f%f%f",&a,&b,&c);
  if(b*b >= 4*a*c){
    printf("roots are real\n");
    if(b*b == 4*a*c){
      printf("roots are real and equal \n");
    }
    r1 = -b+sqrt(b*b-4*a*c)/(2*a);
    r2 = -b-sqrt(b*b-4*a*c)/(2*a);
    printf("The first root is %2f \n",r1);
    printf("The Second root is %2f \n",r2);
  }
  else{
    printf("roots are imaginary \n");
    r1 = r2 = b/(2*a);
    imag = sqrt(-1*(b*b-4*a*c));
    printf("The first root is -%2f+i.%2f \n",r1,imag);
    printf("The second root is -%2f-i.%2f \n",r1,imag);
  }

}
