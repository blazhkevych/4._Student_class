#pragma once
#include <iostream>

class Student
{
	// Данные - члены(поля) :
	char* m_name;		// Имя	
	char* m_surname;	// Фамилия	
	int m_age;			// Возраст	
	char m_phone[15];	// Телефон	
	double m_average;	// Средний бал
public:
	// Конструкторы:
	// Конструктор по умолчанию (обнуляет поля)
	Student();

	// Конструктор копирования (нужен при наличии динамических полей в классе)
	Student(const Student& student);

	//Конструктор с всеми параметрами (нужен для инициализации всех полей)
	Student(const char* name, const char* surname, int age, const char* phone, double average);

	// Деструктор
	~Student();

	// Методы-аксессоры:
	// Инспекторы (позволяют получить значения полей)
	int getAge()const { return m_age; };
	double getAverage()const { return m_average; }; // правий "const" - метод не изменяет обьект, не может изменять поля, 
	const char* getPhone()const { return m_phone; }; // левый "const" - возврат константного чаровского указателя.	
	char* getName()const { return m_name; };
	char* getSurname()const { return m_surname; };

	// Модификаторы (позволяют установить значения полей)
	void setAge(int age) { m_age = age; }
	void setAverage(double average) { m_average = average; }
	void setName(const char* name);
	void setSurname(const char* surname);
	void setPhone(const char* phone);

	// Метод выводит на экран все данные (поля) студента 
	void Print();

	// Метод выводит на экран "шапку" для всех данных (полей) студента 
	void PrintHeader();
};

// Функция сохраняет студента в файл
void SaveStudent(const Student& student);

// Функция читает студента из файла
void LoadStudent(Student& student);

// Функция заполнения полей студента
void InputStudent(Student& student);

// Функция выводит на экран все данные (поля) студента
void PrintStudent(const Student& student);

// Функция выводит на экран "шапку" для всех данных (полей) студента 
void PrintStudentHeader(const Student& student);