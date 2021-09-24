#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	float a[10];
	for (int i = 0; i < 10; i++) {
		printf("Введите элемент %d = ", i + 1);
		scanf_s("%f", a);


	}


	return 0;
}