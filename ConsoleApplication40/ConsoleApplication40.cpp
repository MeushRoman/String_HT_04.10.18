// ConsoleApplication40.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

//���� ������, ��������� �� ������� ����, ����������� ��������� (����� ��� �����������). ����� ���������� ���� � ������

void string41(){
	cout << "41. ";
	string str = "������ ����� �� ������";
	int k = 0;
	for (int i = 0; i <= str.size(); i++)
	{
		if (str[i] == ' ' || str[i] == '\0') k++;
	}
	cout << k << endl;
}
//���� ������, ��������� �� ������� ����, ��������� ���������� ������� � ����������� ��������� (����� ��� �����������). ����� ���������� ����, ������� ���������� � ������������� ����� � ��� �� ������.

void string42() {
	cout << "42. " << endl;
	char str[100] = "��� ��� ��� ��� ���";
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
	cout << "������� " << count << endl;
}

//���� ������, ��������� �� ������� ����, ��������� ���������� ������� � ����������� ��������� (����� ��� �����������). ����� ���������� ����, ������� �������� ���� �� ���� ����� ���. 

void string43() {
	cout << "43. " << endl;
	char str[100] = "����� �� ����� ����";
	char ch = '�';
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

//���� ������, ��������� �� ������� ����, ��������� ���������� ������� � ����������� ��������� (����� ��� �����������). ����� ���������� ����, ������� �������� ����� ��� ����� ���. 

void string44() {

	cout << "44. " << endl;
	char str[100] = "���� ������� �����";
	int num = 0, numa = 0;
	cout << str << endl;;
	for (int i = 0; i <= strlen(str); i++)
	{
		if (str[i] == '�')
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

