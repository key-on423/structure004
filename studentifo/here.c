#include <stdio.h>
#define numb 30
#include <string.h>
char* gets(char* st, int n);
struct name
{
	char first[numb];
	char last[numb];
};

struct ifo
{
	struct name hi;
	double grade[3];
	double aver;
};

int main()
{
	int i = 0;
	double sum = 0;
	struct ifo lay;
	printf("请输入学生的名:\n");
	gets(lay.hi.first, numb);
	printf("请输入学生的姓\n");
	gets(lay.hi.last, numb);
	printf("请输入学生的3科成绩:\n");
	for (i = 0;i < 3;i++)
	{
		scanf("%lf", &lay.grade[i]);
		sum += lay.grade[i];
	}
	lay.aver = sum/3;
	printf("%s%s的三科成绩分别为%.2lf %.2lf %.2lf平均成绩为%.2lf\n", lay.hi.last, lay.hi.first, lay.grade[0], lay.grade[1], lay.grade[2], lay.aver);
	printf("PAST!\n");
	return 0;
}
char* gets(char* st, int n)
{
	char* ret;
	char* find;
	ret = fgets(st, n, stdin);
	if (ret)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret;
}

