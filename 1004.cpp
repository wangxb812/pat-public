#define _CRT_SECURE_NO_WARNINGS
//�����ʽ��ÿ�������������1��������������ʽΪ
///  ��1�У�������n
//  ��2�У���1��ѧ�������� ѧ�� �ɼ�
//  ��3�У���2��ѧ�������� ѧ�� �ɼ�
//  ... ... ...
//  ��n+1�У���n��ѧ�������� ѧ�� �ɼ�
//����������ѧ�ž�Ϊ������10���ַ����ַ������ɼ�Ϊ0��100֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�
//�����ʽ����ÿ�������������2�У���1���ǳɼ����ѧ����������ѧ�ţ���2���ǳɼ����ѧ����������ѧ�ţ��ַ�������1�ո�
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
#define N 100
#define stu_N 10
struct stu_Score
{
	char name[11];//��11����10
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
	scanf("%d", &num_op);//����������û�м�&
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
