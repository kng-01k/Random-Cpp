#include <stdio.h>

int main()
{	
	int a;
  	scanf("%d", &a);
  	for(int i=0; i<a; i++){
    		for(int j=1; j<a-i; j++) 
			printf(" ");
    		for(int k=0; k<2*i+1;k++) 
			printf("*");
    		printf("\n");
  	}
  	for(int i=a-1; i>0; i--){
    		for(int j=1; j<=a-i; j++) 
			printf(" ");
    		for(int k=2*i-1; k>0;k--) 
			printf("*");
    		printf("\n");
  	}
	return 0;
}
