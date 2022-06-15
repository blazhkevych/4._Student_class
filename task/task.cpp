/*
	СТАТУС : Не готово.

	ВОЗМОЖНЫЕ ДОРАБОТКИ:
	* подописывать всевозможные конструкторы, учесть делегирование
	* оттестировать сохранение / загрузку
	ИЗВЕСТНЫЕ ОШИБКИ:
	* просмотреть код, на соответствие double поля среднего бала
	* кон-р копирования работает не коректно, падает программа по завершении, на удалении одного и того же адресса
	*
	ВИДЕО 2:20:42(начало дз), 2:26:50(по функция вне класса), 2:27:38(по функ-ям записи/чтения)
*/
#include <iostream>
#include "Student.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Created s1:" << endl;
	Student s1;
	PrintStudentHeader(s1);
	PrintStudent(s1);

	cout << "\nCreated s2:" << endl;
	Student s2{ "Ivan", "Petrov", 50, "+380998887765", 11.99 };
	PrintStudentHeader(s2);
	PrintStudent(s2);

	cout << "\nCreated s3:" << endl;
	Student s3{ "Viktor", "Pupkin", 20, "+380112223344", 5.57 };
	PrintStudentHeader(s3);
	PrintStudent(s3);

	cout << "\nCreated s4 = s3:" << endl;
	Student s4 = s3;
	s4.PrintHeader();
	s4.Print();

	cout << "\nCreated s5:" << endl;
	Student s5;
	InputStudent(s5);
	s5.PrintHeader();
	s5.Print();

	//SaveStudent(s2);
	//LoadStudent(s3);

	return 0;
}