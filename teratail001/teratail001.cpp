#include<stdio.h>
#include<string.h>
typedef struct
{
	char name[64];
	int age;
	int gender;
}people;

int input(int);
int output(people, int);
int main(void)
{
	people data[3];
	int i;
	for (i = 1; i <= 3; i++)
	{
		int input(i);
	}
	for (i = 1; i <= 3; i++)
	{
		int output(data, i);
	}
	return 0;
}

int input(int i)
{
	ptintf("���O����͂��Ă��������B\n");
	scanf("%s", data[i]->name);
	printf("�N�����͂��Ă��������B\n");
	scanf("%d", data[i]->age);
	printf("�j���Ȃ�0�A�����Ȃ�1����͂��Ă��������B\n");
	scanf("%d", data[i]->gender);
	return 0;
}

int output(people data, int i)
{
	printf("���Ȃ��̖��O��%s�ł�\n", data[i].name);
	printf("���Ȃ���%d�΂ł�\n", data[i].age);
	for (; ;)
	{
		if (data[i].gender == 0 || 1) break;
		printf("�j���Ȃ�0�A�����Ȃ�1����͂��Ă�������\n");
		scanf("%d", data->gender);
	}
	if (data[i].gender == 0)
		printf("���Ȃ��͒j���ł�\n");
	if (data[i].gender == 1)
		printf("���Ȃ��͏����ł�\n");
	return 0;
}
