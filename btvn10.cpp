#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c;
	float S;
	printf("a :");
	scanf("%d", &a);
	printf("b :");
	scanf("%d", &b);
	printf("c :");
	scanf("%d", &c);
	S = sqrt(pow(a,2)+pow(b,2))/(c + 1) + (a*b)/c - sqrt(fabs(a - b) + pow(c,2));
	printf("ket qua: %.2f", S);
	return 0;
}
