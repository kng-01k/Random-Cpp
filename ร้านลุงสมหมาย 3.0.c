#include <stdio.h>

struct person
{
  	char name[50], sname[50], gen[10];
  	int age;
};

int main()
{
	int n;
  	struct person cus[20];
  	scanf("%d", &n);
  	for(int i=0; i<n; i++) {
    		scanf("%s %s", &cus[i].name, &cus[i].sname);
    		scanf("%d", &cus[i].age);
    		scanf("%s", &cus[i].gen);
  	}
  	printf("--Customers Information--\n");
  	for(int i=0; i<n; i++) {
    		printf("%s %s ", cus[i].name, cus[i].sname);
    		cus[i].age  = 2017-cus[i].age;
    		printf("(age : %d)\n", cus[i].age);
  	}
	return 0;
}
