/*Chicken and rabbit in the same cage 
It is known that the total number of 
chickens and rabbits is n and the total number of legs is m. 
Input n and m, and output the number of chickens and rabbits in sequence. 
If there is no solution, output no answer.*/
#include <stdio.h>
#include <math.h>
int main() {
	long x, y,n,m;
	scanf("%d %d", &n, &m);
	x = 2*n- 0.5*m;
	y = n - x;
	if (m % 2 == 1 || x < 0 || y < 0){
		printf("No answer\n");
	}
	else{
		printf("%d %d", x, y);
	}
	return 0;
}
	
