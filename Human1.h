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
	Human1(string _name,string _surname, string _patron, int _age, int _weight);

	string get_surname() const;
	void set_surname(string surname1);
	string get_patron() const;
	void set_patron(string patron1);
	int get_age() const;///возвращает возраст
	int get_weight() const;//возвращает вес
	void set_age(int age1); //заполняет возраст
	void set_weight(int weight1);//заполняет вес
	string get_name() const;//возращает ФИО
	void set_name(string name1);//заполняет ФИО
	string tostring() const;
	void set_all(string _name, string _surname, string _patron, int _age, int _weight); 

};

