#define _CRT_SECURE_NO_WARNINGS
//输入格式：每个测试输入包含1个测试用例，格式为
///  第1行：正整数n
//  第2行：第1个学生的姓名 学号 成绩
//  第3行：第2个学生的姓名 学号 成绩
//  ... ... ...
//  第n+1行：第n个学生的姓名 学号 成绩
//其中姓名和学号均为不超过10个字符的字符串，成绩为0到100之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
//输出格式：对每个测试用例输出2行，第1行是成绩最高学生的姓名和学号，第2行是成绩最低学生的姓名和学号，字符串间有1空格。
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
#define N 100
#define stu_N 10
struct stu_Score
{
	char name[11];//是11不是10
	char number[11];
	int score;
	//stu_Score(char _name[10], char _number[10], int _score) :name[10](_name[10]), number[10](_number[10]), score(_score);

}student;
int stu_High(int n, stu_Score  *student)
{
	int high_Num = student[0].score, high_flag = 0;
	for (int i = 0; i<n; i++)
	{
		if (student[i].score >= high_Num)
		{
			high_Num = student[i].score;
			high_flag = i;
		}
	}
	return high_flag;
}

int stu_Low(int n, stu_Score  *student)
{
	int low_Num = student[0].score, low_flag = 0;
	for (int i = 0; i<n; i++)
	{
		if (student[i].score <= low_Num)
		{
			low_Num = student[i].score;
			low_flag = i;
		}
	}
	return low_flag;
}

int main()
{
	int num_op=0;
	scanf("%d", &num_op);//错诶在这里没有加&
	stu_Score  *student=new stu_Score [N];
	student = (struct stu_Score *)malloc(num_op * sizeof(struct stu_Score));
	for (int i = 0; i < num_op; i++)
	{
		scanf("%s %s %d", student[i].name,student[i].number,&student[i].score);
		//cin >>student[i].name>>" ">>student[i].number>>" ">> student[i].score;
	}
	int high_num = stu_High(num_op, student);
	int low_num = stu_Low(num_op, student);
	printf("%s %s\n", student[high_num].name, student[high_num].number);
	printf("%s %s\n", student[low_num].name, student[low_num].number);
	return 0;
}
