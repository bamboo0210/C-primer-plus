/*escape.c--ʹ��ת������*/
#include<stdio.h>
int main(void)
{
	float salary;
	printf("\aEnter your desired monthly salary:");/*1*/
	printf("$________\b\b\b\b\b\b\b");/*2*/
	scanf_s("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);/*2*/
	printf("\rGee!\n");/*4*/
	return 0;
}