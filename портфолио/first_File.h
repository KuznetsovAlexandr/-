#pragma once
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
	setlocale(LC_ALL, "rus");

	string path = c; //строка path хранит в себе название файла
	fstream file_read; // присваиваем классу fstream название file_read
	file_read.open(path, fstream::in | fstream::out | fstream::trunc);// использу€ метод опен указываем что мы работаем с нашим файлом и на запись и на чтение , trunc удал€ет все что в файле было

	if (!file_read.is_open()) // если файл не открылс€ напишет Error
	{
		cout << "Error" << endl;

	}
	else							// если файл открылс€ , то записывем текст
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
	else							// если файл открылс€ , то  выгружаем построчно данные в массив massString
	{
		for (int i = 0; i < a; i++)
		{
			getline(file_read, massString[i]);

		}
		file_read.close();
	}
}

#endif