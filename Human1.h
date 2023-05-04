//Простой класс.Разработала Мясоедова Алина,студентка группы ВМК-20

#pragma once
#include<string>
#include <iostream>

using namespace std;

/// <summary>
/// класс Человeк
/// </summary>
class Human1 
{
private:
	/// <summary>
	/// возраст
	/// </summary>
	int age;
	/// <summary>
	/// вес
	/// </summary>
	int weight; 
	/// <summary>
	/// имя
	/// </summary>
	string name;
	/// <summary>
	/// фамилия
	/// </summary>
	string surname;
	/// <summary>
	/// отчество
	/// </summary>
	string patron;
public:

	// конструктор по умолчанию
	Human1();

	// конструктор с заданием данных
	Human1(const string &_name,const string &_surname,const string& _patron, int _age, int _weight);

	string get_surname() const;//const-изменение формального параметра внутри функции не требуется,также нужен для вызова  объекта-константы
	void set_surname(const string &surname1);
	string get_patron() const;
	void set_patron(const string &patron1);
	int get_age() const;///возвращает возраст
	int get_weight() const;//возвращает вес
	void set_age(int age1); //заполняет возраст
	void set_weight(int weight1);//заполняет вес
	string get_name() const;//возращает ФИО
	void set_name(string name1);//заполняет ФИО
	string tostring() const;//перевод полей в строку
	void set_all(const string &_name,const string &_surname,const string &_patron, int _age, int _weight); //общий сеттер

};


