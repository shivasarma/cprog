#include <stdio.h>
#include <math.h>

int add(int a, int b)
{
	int c = a + b;
	return c;
}

int subtract(int a, int b)
{
	int c = a - b;
	return c;
}

int multiply(int a, int b)
{
	int c = a * b ;
	return c;
}

int divide(int a, int b)
{
	int c = a/b;
	return c;
}


int main(){
	printf("Press \t 1 for addition \t \t 2 for subtraction \t \t 3 for multiplication \t \t 4 for division \n");
	int num,a,b,c;
	//signed char cha;
	scanf("%d" ,&num);
	printf("Enter two numbers \n");
	scanf("%d" ,&a);
	scanf("%d" ,&b);
	printf("the two numbers you've entered are %d & %d", a, b);
switch(num){
		case(1) :
			printf("The addition of %d & %d is : %d \n", a,b,add(a,b));
			break;

		case(2) :
			printf("The subtraction of %d & %d is : %d \n", a,b,subtract(a,b));
			break;
		case(3) :
			printf("The multiplication of %d & %d is : %d \n", a,b, multiply(a,b));
			break;

		case(4) :
			printf("The division of %d & %d is : %d \n", a, b, divide(a,b));
			break;
		default:
			printf("We didn't get you please try again \n");

	}
return 0;


}
