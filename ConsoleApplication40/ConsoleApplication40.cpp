// ConsoleApplication40.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

//Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). Найти количество слов в строке

void string41(){
	cout << "41. ";
	string str = "просто какая то строка";
	int k = 0;
	for (int i = 0; i <= str.size(); i++)
	{
		if (str[i] == ' ' || str[i] == '\0') k++;
	}
	cout << k << endl;
}
//Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами (одним или несколькими). Найти количество слов, которые начинаются и заканчиваются одной и той же буквой.

void string42() {
	cout << "42. " << endl;
	char str[100] = "ЛОЛ МОЛ ЛОМ КЕК СОС";
	char* context;
	char* p = strtok_s(str, " ", &context);
	int k = 0;
	int count = 0;
	while (p != NULL)
	{
		cout << p << " " << endl;
		k = strlen(p);
		if (p[0] == p[k - 1])
		{
			count++;
		}
		p = strtok_s(context, " ", &context);
	}
	cout << "Найдено " << count << endl;
}

//Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами (одним или несколькими). Найти количество слов, которые содержат хотя бы одну букву «А». 

void string43() {
	cout << "43. " << endl;
	char str[100] = "КАКОЙ ТО ТЕКСТ НАНА";
	char ch = 'А';
	bool b = true;
	int ln = strlen(str);
	int c = 0;
	for (int i = 0; i < ln; i++)
	{
		if (b)
		{
			if (str[i] == ch)
			{
				c++;
				b = false;
			}
		}
		else
		{
			if (str[i] == ' ')
			{
				b = true;
			}
		}
	}
	cout << c << endl;
}

//Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами (одним или несколькими). Найти количество слов, которые содержат ровно три буквы «А». 

void string44() {

	cout << "44. " << endl;
	char str[100] = "АБРА КАДАБРА АНАНА";
	int num = 0, numa = 0;
	cout << str << endl;;
	for (int i = 0; i <= strlen(str); i++)
	{
		if (str[i] == 'А')
		{
			numa++;
		}
		else if (str[i] == ' ' || str[i] == '\0')
		{
			if (numa == 3) num++;
			numa = 0;
		}
	}
	cout << num << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/

	string41(); cout << endl;
	string42(); cout << endl;
	string43(); cout << endl;
	string44(); cout << endl;

	system("pause");
    return 0;
}

