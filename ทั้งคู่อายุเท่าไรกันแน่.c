#include <stdio.h>

int main()
{
	int x, n, m, y;
  	scanf("%d %d %d", &n, &m, &y);
  	x = (m*n+m*y-y)/(m-1);
	printf("%d %d",x , x-n);
	return 0;
}
