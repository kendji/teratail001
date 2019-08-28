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
	ptintf("名前を入力してください。\n");
	scanf("%s", data[i]->name);
	printf("年齢を入力してください。\n");
	scanf("%d", data[i]->age);
	printf("男性なら0、女性なら1を入力してください。\n");
	scanf("%d", data[i]->gender);
	return 0;
}

int output(people data, int i)
{
	printf("あなたの名前は%sです\n", data[i].name);
	printf("あなたは%d歳です\n", data[i].age);
	for (; ;)
	{
		if (data[i].gender == 0 || 1) break;
		printf("男性なら0、女性なら1を入力してください\n");
		scanf("%d", data->gender);
	}
	if (data[i].gender == 0)
		printf("あなたは男性です\n");
	if (data[i].gender == 1)
		printf("あなたは女性です\n");
	return 0;
}
