#include <stdio.h>

int main()
{
	int a, b;
  	scanf("%d %d", &a, &b);
  	if(a > b) 
		printf("MAX : %d\nMIN : %d", a, b);
  	else 
		printf("MAX : %d\nMIN : %d", b, a);
	return 0;
}
