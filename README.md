# Work-with-Files-and-Headlines
Работа с файлами и заголовками + ГитХАБ


#include "pch.h"
#include <iostream>
#include <fstream> // - библиотека работы с потоками ввода и вывода данных в файлах
#include <string>
#include <Windows.h>
#include "second_File.h"
#

int main()
{
	setlocale(LC_ALL, "rus");
	firstFile("myFile.txt");
	secondFile("123.txt");
}#pragma once
#ifndef FIRST_FILE
#define FIRST_FILE

#include "pch.h"
#include <iostream>
#include <fstream> // - библиотека работы с потоками ввода и вывода данных в файлах

using namespace std;

const int a = 6;

string massString[a]; // создаем  массив типа стринг с именем massString , размером а


void firstFile(string c)
{
	string path = c; //строка path хранит в себе название файла
	fstream file_read; // присваиваем классу fstream название file_read
	file_read.open(path, fstream::in | fstream::out | fstream::trunc);// используя метод опен указываем что мы работаем с нашим файлом и на запись и на чтение , trunc удаляет все что в файле было

	if (!file_read.is_open()) // если файл не открылся напишет Error
	{
		cout << "Error" << endl;

	}
	else							// если файл открылся , то записывем текст
	{
		{
			file_read << "When you walk through a storm " << "\n";
			file_read << "Hold your head up high " << "\n";
			file_read << "And don't be afraid of the dark" << "\n";
			file_read << "At the end of the storm" << "\n";
			file_read << "Is a golden sky" << "\n";
			file_read << "And the sweet silver song of a lark" << "\n";
		}
		file_read.close(); // закрываем 
	}

	file_read.open(path, fstream::in | fstream::out);

	if (!file_read.is_open())
	{
		cout << "Error" << endl;

	}
	else							// если файл открылся , то  выгружаем построчно данные в массив massString
	{
		for (int i = 0; i < a; i++)
		{
			getline(file_read, massString[i]);

		}
		file_read.close();
	}
}

#endif
#pragma once
#ifndef SECOND_FILE
#define SECOND_FILE

#include "first_File.h"
#include <iostream> 

using namespace std;

void secondFile(string b)
{
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
