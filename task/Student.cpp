#include <windows.h>
#include <iomanip>
#include "Student.h"
using std::setw;
using std::cout;
using std::endl;
using std::cin;

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
	int name_strlen = strlen(student.getName()) + 1;
	m_name = new char[name_strlen];
	strcpy_s(m_name, name_strlen, student.getName());

	int surname_strlen = strlen(student.getSurname()) + 1;
	m_surname = new char[surname_strlen];
	strcpy_s(m_surname, surname_strlen, student.getSurname());

	m_age = student.getAge();

	strcpy_s(m_phone, sizeof(m_phone), student.getPhone());

	m_average = student.getAverage();
}

//Конструктор с всеми параметрами (нужен для инициализации всех полей)
Student::Student(const char* name, const char* surname, int age, const char* phone, double average)
{
	int name_strlen = strlen(name) + 1;
	m_name = new char[name_strlen];
	strcpy_s(m_name, name_strlen, name);

	int surname_strlen = strlen(surname) + 1;
	m_surname = new char[surname_strlen];
	strcpy_s(m_surname, surname_strlen, surname);

	m_age = age;

	strcpy_s(m_phone, sizeof(m_phone), phone);

	m_average = average;
}

// Деструктор
Student::~Student()
{
	delete[] m_name;
	delete[] m_surname;
}

// Модификатор закрытого поля "m_name"
void Student::setName(const char* name)
{
	if (m_name)
		delete[]m_name;
	m_name = new char[strlen(name) + 1];
	strcpy_s(m_name, strlen(name) + 1, name);
}

// Модификатор закрытого поля "m_surname"
void Student::setSurname(const char* surname)
{
	if (m_surname)
		delete[]m_surname;
	m_surname = new char[strlen(surname) + 1];
	strcpy_s(m_surname, strlen(surname) + 1, surname);
}

// Модификатор закрытого поля "m_phone"
void Student::setPhone(const char* phone)
{
	memset(m_phone, 0, sizeof(m_phone));
	strcpy_s(m_phone, strlen(phone) + 1, phone);
}

// Метод выводит на экран все данные (поля) студента 
void Student::Print()
{
	cout << setw(10) << m_name
		<< setw(15) << m_surname
		<< setw(5) << m_age
		<< setw(16) << m_phone
		<< setw(9) << m_average << endl;
}

// Метод выводит на экран "шапку" для всех данных (полей) студента 
void Student::PrintHeader()
{
	cout << setw(10) << "Name"
		<< setw(15) << "Surname"
		<< setw(5) << "Age"
		<< setw(16) << "Phone"
		<< setw(9) << "Average" << endl;
}

// Функция заполнения полей студента
void InputStudent(Student& student)
{
	char name[50]{ '\0' };
	char surname[50]{ '\0' };
	int age{ 0 };
	char phone[50]{ '\0' };
	double average;

	cout << "\nEnter name: ";
	cin.getline(name, 50);
	student.setName(name);

	cout << "\nEnter surname: ";
	cin.getline(surname, 50);
	student.setSurname(surname);

	cout << "\nEnter age: ";
	cin >> age;
	student.setAge(age);
	cin.get();

	cout << "\nEnter phone: ";
	cin.getline(phone, 50);
	student.setPhone(phone);

	cout << "\nEnter average: ";
	cin >> average;
	student.setAverage(average);
}

// Функция выводит на экран все данные (поля) студента
void PrintStudent(const Student& student)
{
	cout << setw(10) << student.getName()
		<< setw(15) << student.getSurname()
		<< setw(5) << student.getAge()
		<< setw(16) << student.getPhone()
		<< setw(9) << student.getAverage() << endl;
}

void PrintStudentHeader(const Student& student)
{
	cout << setw(10) << "Name"
		<< setw(15) << "Surname"
		<< setw(5) << "Age"
		<< setw(16) << "Phone"
		<< setw(9) << "Average" << endl;
}