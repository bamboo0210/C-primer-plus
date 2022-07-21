#include<stdio.h>
int main(void)
{
	printf("第一题：\n");
	int big_int = 2000000000000000000;
	float big_float = 3E100;
	float small_float = 0.2E100 / 100;
	printf("整数上溢%d,浮点数上溢%f,浮点数下溢%f\n\n\n", big_int, big_float, small_float);

	printf("第二题：\n");
	int ascii;
	scanf_s("%d", &ascii);
	printf("%c\n\n\n", ascii);

	printf("第三题：\n");
	printf("\a");
	printf("Startled by the sudden sound, Sally shouted,\n");
	printf("\"By the Great Pumpkin, what was that!\"\n\n\n");

	printf("第四题：\n");
	float simple_float = 66.66;
	printf("Enter a floating-point value: %.2f\n", simple_float);
	printf("fixed-point notation: %f\n", simple_float);
	printf("exponential notation: %e\n", simple_float);
	printf("p notation: %a\n\n\n", simple_float);

	printf("第五题：\n");
	long long int ago;
	printf("Enter your ago please: ______\b\b\b\b\b\b\b");
	scanf_s("%lld", &ago);
	printf("your ago return to second is %lld\n\n\n", ago * 31560000);

	printf("第六题：\n");
	long double water;
	printf("Please enter the quarts of water: ____\b\b\b\b");
	scanf_s("%le",& water);
	printf("The number of water molecules is %le\n\n\n", water * 950 / 3E-23);

	printf("第七题：\n");
	double height;
	printf("Please enter your height in inches: ____\b\b\b\b");
	scanf_s("%lf", &height);
	printf("your height is %.2lf centimeter.\n\n\n", height * 2.54);

	printf("第八题：\n");
	printf("请输入杯数：");
	double america;
	scanf_s("%lf", &america);
	printf("品脱数为：%.2lf\n", america / 2);
	printf("盎司数为：%.2lf\n", america * 8);
	printf("汤勺数为：%.2lf\n", america * 16);
	printf("茶勺数为：%.2lf\n", america * 48);
}