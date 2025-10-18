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
	S = (pow(a,2) + sqrt(pow(b,2)+4*a*c))/(2*a) - pow(b,3)/pow(c,2) + sqrt(fabs(a-b));
	printf("ket qua: %.2f", S);
	return 0;
}
