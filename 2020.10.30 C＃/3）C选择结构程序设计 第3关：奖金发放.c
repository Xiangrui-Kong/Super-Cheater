#include <stdio.h>
int main()
{
	double I, salary = 0;
	scanf("%lf", &I);

	double salary1 = 100000 * 0.1;
	double salary2 = (200000 - 100000) * 0.075 + salary1;
	double salary3 = (400000 - 200000) * 0.05 + salary2;
	double salary4 = (600000 - 400000) * 0.03 + salary3;
	double salary5 = (1000000 - 600000) * 0.015 + salary4;
	if (I <= 100000) {
		salary = I * 0.1;
	}else if (I > 100000 && I <= 200000) {
		salary = salary1 + (I - 100000) * 0.075;
	}else if (I > 200000 && I <= 400000) {
		salary = salary2 + (I - 200000) * 0.05;
	}else if (I > 400000 && I <= 600000) {
		salary = salary3 + (I - 400000) * 0.03;
	}else if (I > 600000 && I <= 1000000) {
		salary = salary4 + (I - 600000) * 0.015;
	}else if (I > 1000000){
		salary = salary5 + (I - 1000000) * 0.01;
	}
	printf("%.2f\n", salary);
	return 0;}
    
