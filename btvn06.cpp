#include <stdio.h>

int main() {
	int a, b, c, d;
	printf(" a : ");
	scanf("%d", &a);
	printf(" b : ");
	scanf("%d", &b);
	printf(" c : ");
	scanf("%d", &c);
	printf(" d : ");
	scanf("%d", &d);
	int A = a * b - 2*c + 3 * (a - d);
	printf("A = %d", A);
	return 0;
}
