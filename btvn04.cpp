#include <stdio.h>

int main() {
	float a, b;
	
	printf("Chieu dai: ");
	scanf("%f", &a);
	
	printf("Chieu rong: ");
	scanf("%f", &b);
	
	float C = 2 * (a + b), S = a * b;
	printf("Chu vi: %.2f\n", C);
	printf("Dien tich: %.2f\n", S);
	
	return 0;
}
