#include <stdio.h>

int main()
{
	float a[5];
  	for(int i=0; i<5; i++)
 		scanf("%f", &a[i]);
  	printf("THAI = %.1f\n", a[0]);
  	printf("MATH = %.1f\n", a[1]);
  	printf("ENGLISH = %.1f\n", a[2]);
  	printf("SCIENCE = %.1f\n", a[3]);
  	printf("SPORT = %.1f\n", a[4]);
  	printf("---\n");
  	printf("GPA = %.1f", (a[0]+a[1]+a[2]+a[3]+a[4])/5);
	return 0;
}
