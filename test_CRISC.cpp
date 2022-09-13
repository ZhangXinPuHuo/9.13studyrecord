#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	long x, y,n,m;
	scanf("%d %d", &n, &m);
	x = 2*n- 0.5*m;
	y = n - x;
	if (m % 2 == 1 || x < 0 || y < 0)
		printf("No answer\n");
	else
		printf("%d %d", x, y);
	return 0;
}
	