#include "pch.h"
#include <iostream>
#include <fstream> // - библиотека работы с потоками ввода и вывода данных в файлах
#include <string>
//include <Windows.h>
#include "second_File.h"
#

int main()
{
	setlocale(LC_ALL, "rus");
	firstFile("myFile.txt");
	secondFile("123.txt");
}