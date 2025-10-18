#include <stdio.h>

int main() {
	int number_1 = 3, number_2 = 2, sum, effect, accumulate;
	float division;
	sum = number_1 + number_2;
	effect = number_1 - number_2;
	accumulate = number_1 * number_2;
	division = (float)number_1 / number_2;
	printf ("Tong:%d\n ",sum);
	printf ("Hieu:%d\n ",effect);
	printf ("Tich:%d\n ",accumulate);
	printf ("Thuong:%.1f\n ",division);
	return 0;
	
}
