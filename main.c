#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	printf("������� ����� �� 1 �� 12: ");
	scanf_s("%d", &a);
	if (a == 1.0) puts("������");
	if (a == 2.0) printf("�������");
	if (a == 3.0) printf("����");
	if (a == 4.0) printf("������");
	if (a == 5.0) printf("���");
	if (a == 6.0) printf("����");
	if (a == 7.0) printf("����");
	if (a == 8.0) printf("������");
	if (a == 9.0) printf("��������");
	if (a == 10.0) printf("�������");
	if (a == 11.0) printf("������");
	if (a == 12.0) printf("�������");
	if (a > 12) printf("�� ����� ����������������� �����.");

	return 0;
}