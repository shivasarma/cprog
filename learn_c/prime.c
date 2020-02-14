#include<stdio.h>

main(){
	int prime,n;
	printf("Enter the range of prime numbers");
	scanf("%d",&n);
	
	for(prime=2; prime<n; prime++){
		int cond = 1;
		for(int i = 2; i < prime ; i ++){
			if(prime%i == 0){ cond = 0; break; }
		}
		if(cond == 1) { printf("%d\n",prime); }
	
	}

}
