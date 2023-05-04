//Простой класс.Разработала Мясоедова Алина,студентка группы ВМК-20


#include "Human1.h"

/// <summary>
/// конструктор по умолчанию
/// </summary>
Human1::Human1()
{
	set_name(" ");
	set_surname(" ");
	set_patron(" ");
	set_age(1);
	set_weight(1);
}

/// <summary>
/// конструктор с параметрами
/// </summary>
/// <param name="_name">имя</param>
/// <param name="_surname">фамилия</param>
/// <param name="_patron">отчество</param>
/// <param name="_age">возраст</param>
/// <param name="_weight">вес</param>
Human1::Human1(const  string &_name,const string  &_surname,const string &_patron, int _age, int _weight)
{
	set_name(_name);
	set_surname(_surname);
	set_patron(_patron);
	set_age(_age);
	set_weight(_weight);

}


string Human1::get_surname() const//возврат фамилии
{
	return surname;
}


void Human1::set_surname(const string & surname1) //сеттер имени
{
	if (surname1 != "") // поле не должно быть пустым
		surname = surname1; //проверка заполнения
	else throw invalid_argument("Ошибка заполнения,фамилия не может быть пустой;set_surname"); //исключение
}

string Human1::get_patron() const
{
	return patron;
}

void Human1::set_patron(const string & patron1) // сеттер отчества
{
	if (patron1 != "") // поле не должно быть пустым
		patron = patron1; //проверка заполнения
	else throw invalid_argument("Ошибка заполнения,отчество не может быть пустым.set_patron"); //исключение
}

int Human1::get_age() const { return age; } //возвращает возраст

void Human1::set_age(int age1) //заполнение возраста
{
	if (age1 >= 0) //проверка заполнения
		age = age1; //возраст равен переданному значению
	else 
		throw invalid_argument(" Возраст должен быть меньше или равен 0;set_age"); //бросает исключение
}

int Human1::get_weight() const { return weight; } //Возрасщает вес

void Human1::set_weight(int weight1) //заполнение веса
{
	if (weight1 > 0) weight = weight1; //проверка заполнения
	else throw invalid_argument("Вес не должен быть равен 0;set_weight");//бросает исключение
}


string Human1::get_name() const { return name; }// Возвращает имя

void Human1::set_name(const string name1) // заполнение
{
	if (name1 != "") // поле не должно быть пустым
		name = name1; //проверка заполнения
	else throw invalid_argument("Ошибка,имя не должно быть пустым;set_name"); //исключение

}

string Human1::tostring() const //преобразование данных в строку
{
	 
	return surname+" " + name +" "+ patron + " возраст " + to_string(age) + " вес " + to_string(weight)+'\n';

}

void Human1::set_all(const string &_name,const string &_surname,const string &_patron, int _age, int _weight)//общий сеттер для создания массива объектов
{
	set_name(_name);
	set_surname(_surname);
	set_patron(_patron);
	set_age(_age);
	set_weight(_weight);

};
