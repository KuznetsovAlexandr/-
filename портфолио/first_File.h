#pragma once
#ifndef FIRST_FILE
#define FIRST_FILE

#include "pch.h"
#include <iostream>
#include <fstream> // - ���������� ������ � �������� ����� � ������ ������ � ������


using namespace std;

const int a = 6;

string massString[a]; // �������  ������ ���� ������ � ������ massString , �������� �


void firstFile(string c)
{
	setlocale(LC_ALL, "rus");

	string path = c; //������ path ������ � ���� �������� �����
	fstream file_read; // ����������� ������ fstream �������� file_read
	file_read.open(path, fstream::in | fstream::out | fstream::trunc);// ��������� ����� ���� ��������� ��� �� �������� � ����� ������ � �� ������ � �� ������ , trunc ������� ��� ��� � ����� ����

	if (!file_read.is_open()) // ���� ���� �� �������� ������� Error
	{
		cout << "Error" << endl;

	}
	else							// ���� ���� �������� , �� ��������� �����
	{
		{
			file_read << "When you walk through a storm " << "\n";
			file_read << "Hold your head up high " << "\n";
			file_read << "And don't be afraid of the dark" << "\n";
			file_read << "At the end of the storm" << "\n";
			file_read << "Is a golden sky" << "\n";
			file_read << "And the sweet silver song of a lark" << "\n";
		}
		file_read.close(); // ��������� 
	}

	file_read.open(path, fstream::in | fstream::out);

	if (!file_read.is_open())
	{
		cout << "Error" << endl;

	}
	else							// ���� ���� �������� , ��  ��������� ��������� ������ � ������ massString
	{
		for (int i = 0; i < a; i++)
		{
			getline(file_read, massString[i]);

		}
		file_read.close();
	}
}

#endif