#include<stdio.h>
int main(void)
{
	printf("��һ�⣺\n");
	int big_int = 2000000000000000000;
	float big_float = 3E100;
	float small_float = 0.2E100 / 100;
	printf("��������%d,����������%f,����������%f\n\n\n", big_int, big_float, small_float);

	printf("�ڶ��⣺\n");
	int ascii;
	scanf_s("%d", &ascii);
	printf("%c\n\n\n", ascii);

	printf("�����⣺\n");
	printf("\a");
	printf("Startled by the sudden sound, Sally shouted,\n");
	printf("\"By the Great Pumpkin, what was that!\"\n\n\n");

	printf("�����⣺\n");
	float simple_float = 66.66;
	printf("Enter a floating-point value: %.2f\n", simple_float);
	printf("fixed-point notation: %f\n", simple_float);
	printf("exponential notation: %e\n", simple_float);
	printf("p notation: %a\n\n\n", simple_float);

	printf("�����⣺\n");
	long long int ago;
	printf("Enter your ago please: ______\b\b\b\b\b\b\b");
	scanf_s("%lld", &ago);
	printf("your ago return to second is %lld\n\n\n", ago * 31560000);

	printf("�����⣺\n");
	long double water;
	printf("Please enter the quarts of water: ____\b\b\b\b");
	scanf_s("%le",& water);
	printf("The number of water molecules is %le\n\n\n", water * 950 / 3E-23);

	printf("�����⣺\n");
	double height;
	printf("Please enter your height in inches: ____\b\b\b\b");
	scanf_s("%lf", &height);
	printf("your height is %.2lf centimeter.\n\n\n", height * 2.54);

	printf("�ڰ��⣺\n");
	printf("�����뱭����");
	double america;
	scanf_s("%lf", &america);
	printf("Ʒ����Ϊ��%.2lf\n", america / 2);
	printf("��˾��Ϊ��%.2lf\n", america * 8);
	printf("������Ϊ��%.2lf\n", america * 16);
	printf("������Ϊ��%.2lf\n", america * 48);
}