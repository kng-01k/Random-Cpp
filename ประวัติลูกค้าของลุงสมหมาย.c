#include <stdio.h>

int main()
{
	char a[5][20];
   	for(int i=0; i<5; i++)
    		gets(a[i]);
  	printf("--- Customer Detail ---\n");
  	printf("Name : %s %s\n", a[0], a[1]);
  	printf("Address : %s\n", a[2]);
  	printf("Gender : %s\n", a[3]);
  	printf("Tel : %s\n", a[4]);
	return 0;
}
