#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	printf("Введите число от 1 до 12: ");
	scanf_s("%d", &a);
	if (a == 1.0) puts("Январь");
	if (a == 2.0) printf("Февраль");
	if (a == 3.0) printf("Март");
	if (a == 4.0) printf("Апрель");
	if (a == 5.0) printf("Май");
	if (a == 6.0) printf("Июнь");
	if (a == 7.0) printf("Июль");
	if (a == 8.0) printf("Август");
	if (a == 9.0) printf("Сентябрь");
	if (a == 10.0) printf("Октябрь");
	if (a == 11.0) printf("Ноябрь");
	if (a == 12.0) printf("Декабрь");
	if (a > 12) printf("Вы ввели несоответствующее число.");

	return 0;
}