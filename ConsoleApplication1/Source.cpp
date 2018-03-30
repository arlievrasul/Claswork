#include <iostream>
#include <time.h>
using namespace std;

struct fio
{
	char *surname;
	char *name;
	char *patronymic;
};

struct student
{
	fio *fio;
	int *assessments;
	int *attribute;
	int sum;
};

void main()
{
	setlocale(0, "");
	int students_colvo;
	cout << "Пожалуйста введите количество студентоа: ";
	cin >> students_colvo;
	student *students = new student[students_colvo];
	if (students == NULL)
	{
		cout << "Память не выделина" << endl;
	}
	else
	{
		for (int i = 0;i < students_colvo;i++)
		{
			generate_name(students->fio);


			students->assessments = new int[10];
			for (int j = 0;j < 10; j++)
				students->assessments[j] = 1 + rand() % 9;

			students++;
		}
		students -= students_colvo;
	}
	system("pause");
}
void chek_assessments(student *student)
{
	if (student->sum > 8)
	{
		student->attribute = 5;
	}
	else if (student->sum > 6 && < 9) 
	{
		student->attribute = 4;
	}
	else if (student->sum > 4 && < 8)
	{
		student->attribute = 4;
	}
	else
}

void calculate_assessments(student *student)
{
	for (int i = 0;i < 10;i++)
		student->sum +=student->assessments[i];

	student->sum = student->sum / 10;
}


void generate_name(fio *fio)
{
	fio->surname = new char[3];
	fio->name = new char[3];
	fio->patronymic = new char[3];
	for (int i = 0;i < 3;i++)
	{
		fio->surname[i] = 97 + rand() % 95;
		fio->name[i] = 97 + rand() % 95;
		fio->patronymic[i] = 97 + rand() % 95;
	}
}