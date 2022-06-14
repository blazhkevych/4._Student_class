#pragma once
class Student
{
	// Данные - члены(поля) :
	char* m_name;		// Имя	
	char* m_surname;	// Фамилия	
	int m_age;			// Возраст	
	char m_phone[15];	// Телефон	
	double m_average;	// Средний бал
public:
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
	int getAge()const;
	double getAverage()const;
	const char* getPhone()const;
	// правий "const" (метод не изменяет обьект, не может изменять поля), 
	//левый "const" - возврат константного чаровского указателя
	char* getName()const;
	char* getSurname()const;

	// Модификаторы (позволяют установить значения полей)
	void setAge(int);
	void setAverage(double);
	void setName(const char*);
	void setSurname(const char*);
	void setPhone(const char*);

	// Метод выводит на экран ??????????????????????????????????????????????????.
	void Print();
};

//
void SaveStudent(const Student&);

//
void LoadStudent(Student&);

//
void InputStudent(Student&);

//
void PrintStudent(const Student&);