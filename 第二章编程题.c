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
	printf("��һ��:\n");
	printf("���㿪ʼ��ת�����\n");
	printf("���㿪ʼ��\nת������\n");
	printf("���㿪ʼ��");
	printf("ת�����\n\n\n");

	printf("�ڶ��⣺\n");
	printf("���㿪ʼ��ת�����\n�й���½\n\n\n");

	printf("������\n");
	int age_01, age_02;
	age_01 = 20;
	age_02 = age_01 * 365;
	printf("��������Ϊ��%d �꣬���ڣ�%d ��\n\n\n", age_01, age_02);

	printf("�����⣺\n");
	jolly();
	jolly();
	jolly();
	deny();
	printf("\n\n\n");
	
	printf("�����⣺\n");
	br();
	printf(", ");
	ic();
	ic();
	br();
	printf("\n\n\n");

	printf("�����⣺\n");
	int toes;
	toes = 10;
	printf("toes = %d, 2*toes = %d, toes squares = %d\n\n\n",toes,2*toes,toes*toes);

	printf("�����⣺\n");
	sm(),sm(),sm();
	printf("\n");
	sm(), sm();
	printf("\n");
	sm();
	printf("\n\n\n");

	printf("�ڰ��⣺\n");
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