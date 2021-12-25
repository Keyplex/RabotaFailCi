#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	system("chcp 1251>nul");
	FILE* file1 = fopen("Test1.txt", "w");
	FILE* file2 = fopen("Test2.txt", "w");
	/*fprintf(file, "Hello");*/
	float a, b, c, x1, x2, d;
	printf("Введите а:");
	scanf("%f", &a);
	fprintf(file1, "%g ", a);
	printf("Введите b:");
	scanf("%f", &b);
	fprintf(file1, "%g ", b);
	printf("Введите c:");
	scanf("%f", &c);
	fprintf(file1, "%g", c);
	d = b * b - 4 * a * c;

	if (d < 0)printf("Уравнение не имеет решения в виде вещественных чисел. \ n");
	if (d < 0)fprintf(file2, "Уравнение не имеет решения в виде вещественных чисел. \n");
	if (d == 0) {
		x1 = (-b) / (2 * a);
		printf("x1 = %f\n", x1);
		fprintf(file2, "x1:%f\n", x1);
	}
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("x1 = %f, x2 = %f\n", x1, x2);
		fprintf(file2, "%f, %f\n", x1, x2);
	}



	fclose(file1, file2);
	return 0;
}