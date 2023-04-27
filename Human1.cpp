//Простой класс.Разработала Мясоедова Алина,студентка группы ВМК-20


#include "Human1.h"


Human1::Human1()
{
	set_name(" ");
	set_surname(" ");
	set_patron(" ");
	set_age(1);
	set_weight(1);
}

Human1::Human1(string _name, string _surname,string _patron, int _age, int _weight)
{
	set_name(_name);
	set_surname(_surname);
	set_patron(_patron);
	set_age(_age);
	set_weight(_weight);

}


string Human1::get_surname() const
{
	return surname;
}


void Human1::set_surname(string surname1)
{
	if (surname1 != "") // поле не должно быть пустым
		this->surname = surname1; //проверка заполнения
	else throw invalid_argument("Введите фамилию"); //исключение
}

string Human1::get_patron() const
{
	return patron;
}

void Human1::set_patron(string patron1) // const string & patron1
{
	if (patron1 != "") // поле не должно быть пустым
		this->patron = patron1; //проверка заполнения
	else throw invalid_argument("Введите отчество"); //исключение
}

int Human1::get_age() const { return age; } //возвращает возраст

void Human1::set_age(int age1) //заполнение возраста
{
	if (age1 >= 0) //проверка заполнения
		age = age1; //возраст равен переданному значению
	else 
		throw invalid_argument(" Возраст должен быть	меньше или равен 0"); //бросает исключение
}

int Human1::get_weight() const { return weight; } //Возрасщает вес

void Human1::set_weight(int weight1) //заполнение веса
{
	if (weight1 > 0) this->weight = weight1; //проверка заполнения
	else throw invalid_argument("Вес не должен быть равен 0");//бросает исключение
}


string Human1::get_name() const { return name; }// Возвращает ФИО

void Human1::set_name(string name1) // заполнение
{
	if (name1 != "") // поле не должно быть пустым
		this->name = name1; //проверка заполнения
	else throw invalid_argument("Введите данные"); //исключение

}

string Human1::tostring() const //преобразование данных в строку
{
	 
	return surname+" " + name +" "+ patron + " возраст " + to_string(age) + " вес " + to_string(weight)+'\n';

}

void Human1::set_all(string _name, string _surname, string _patron, int _age, int _weight)
{
	set_name(_name);
	set_surname(_surname);
	set_patron(_patron);
	set_age(_age);
	set_weight(_weight);

};
