/*
	СТАТУС : Не готово.

	ВОЗМОЖНЫЕ ДОРАБОТКИ:
	* подописывать всевозможные конструкторы, учесть делегирование
	ИЗВЕСТНЫЕ ОШИБКИ:
	* просмотреть код, на соответствие double поля среднего бала
	* написать кон-р копирования
	ВИДЕО 2:20:42(начало дз), 2:26:50(по функция вне класса), 2:27:38(по функ-ям записи/чтения)
*/
#include <iostream>
#include "Student.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	Student s1{ "Ivan", "Petrov", 50, "+380998887765", 11.99 };
	s1.setName("qwerty");
	s1.PrintHeader();
	s1.Print();
	InputStudent(s1);
	s1.PrintHeader();
	s1.Print();

	return 0;
}