#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c, A;
	printf("a :");
	scanf("%d", &a);
	printf("b :");
	scanf("%d", &b);
	printf("c :");
	scanf("%d", &c);
	A = pow(a,3) + pow(b,2) + 2 * c + sqrt(a + b- c);
	printf("ket qua: %d", A);
	return 0;
		
}
