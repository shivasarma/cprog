#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *x,   a ;
	a = 10;
	x = &a ;
	printf("%d\n",x);
	printf("%d\n",&x);
	printf("%d\n",*x);
	return 0;

}
