#include <windows.h>
#include "Student.h"

// Конструктор по умолчанию (обнуляет поля)
Student::Student()
{
	m_name = nullptr;
	m_surname = nullptr;
	m_age = 0;
	memset(m_phone, 0, sizeof(m_phone));
	m_average = 0;
}

// Конструктор копирования (нужен при наличии динамических полей в классе)
Student::Student(const Student& student)
{

}

//Конструктор с всеми параметрами (нужен для инициализации всех полей)
Student::Student(const char* name, const char* surname, int age, const char* phone, double average)
{
	m_name = new char[strlen(name) + 1];
	strcpy_s(m_name, sizeof(*name), name);

	m_surname = new char[strlen(surname) + 1];
	strcpy_s(m_surname, sizeof(*surname), surname);

	m_age = age;

	strcpy_s(m_phone, sizeof(*phone), phone);

	m_average = average;
}

// Деструктор
Student::~Student()
{
	delete[] m_name;
	delete[] m_surname;
}
