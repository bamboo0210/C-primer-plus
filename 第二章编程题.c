#include<stdio.h>
void jolly(void);
void deny(void);
void br(void);
void ic(void);
void sm(void);
void one_three(void);
void two(void);
int main(void)
{
	printf("第一题:\n");
	printf("从零开始的转码生活。\n");
	printf("从零开始的\n转码生活\n");
	printf("从零开始的");
	printf("转码生活。\n\n\n");

	printf("第二题：\n");
	printf("从零开始的转码生活。\n中国大陆\n\n\n");

	printf("第三题\n");
	int age_01, age_02;
	age_01 = 20;
	age_02 = age_01 * 365;
	printf("您的年龄为：%d 岁，等于：%d 天\n\n\n", age_01, age_02);

	printf("第四题：\n");
	jolly();
	jolly();
	jolly();
	deny();
	printf("\n\n\n");
	
	printf("第五题：\n");
	br();
	printf(", ");
	ic();
	ic();
	br();
	printf("\n\n\n");

	printf("第六题：\n");
	int toes;
	toes = 10;
	printf("toes = %d, 2*toes = %d, toes squares = %d\n\n\n",toes,2*toes,toes*toes);

	printf("第七题：\n");
	sm(),sm(),sm();
	printf("\n");
	sm(), sm();
	printf("\n");
	sm();
	printf("\n\n\n");

	printf("第八题：\n");
	printf("starting now:\n");
	one_three();
	printf("done!");
	return 0;
}

void jolly(void)
{
	printf("For he's a holly good fellow!\n");
}
void deny(void)
{
	printf("Which nobody can deny!\n");
}
void br(void)
{
	printf("Brazil, Russia");
}
void ic(void)
{
	printf("India, China\n");
}
void sm(void)
{
	printf("Smile!");
}
void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}
void two(void)
{
	printf("two\n");
}