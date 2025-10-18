#include <stdio.h>

int main() {
	int a = 5, b = 6;
	float c = 7.5;
	int n = a + b + (int)c;
	float t = a + b + c;
	printf("Gia tri cua ba so: a = %d, b = %d, c = %.2f\n", a, b, c);
	printf("Tong nguyen: %d\n", n);
	printf("Tong thuc: %.2f\n", t);
	return 0;
}
