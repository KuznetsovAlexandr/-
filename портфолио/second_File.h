#pragma once
#ifndef SECOND_FILE
#define SECOND_FILE

#include "first_File.h"
#include <iostream> 

using namespace std;

void secondFile(string b)
{
	setlocale(LC_ALL, "rus");

	ofstream file_record(b); // команда для записи в файл ofstream ( в скобочках путь к файлу)

	if (!file_record.is_open())
	{
		cout << "ERROR" << endl;

	}
	else								// если файл открылся , то записываем данные из массива massString во второй файл под названием 123.txt
	{
		for (int i = a - 1; i >= 0; i--)
		{
			file_record << massString[i] << "\n";
		}
	}

	file_record.close();
}

#endif