#include <stdio.h>

int main(){

	for(int i=1; i<=100; i++){
		if(i%2 !=0) printf("%d ",i);
	}

	printf("\n");
	for(int i=1; i<=100; i++){
		if(i%2 ==0) printf("%d ",i);
	}

	
	for(int i=1; i<=100; i++){
		 printf("%d ",i);
	}

	return 0;
}
