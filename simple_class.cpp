// простой класс.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Простой класс.Разработала Мясоедова Алина,студентка группы ВМК-20

#include<iostream>
#include<string>

#include"Human1.h"

using namespace std;


int main() {
	
	setlocale(LC_ALL, "RUS");

	Human1 First;//создаем объект типа First

	
	try //обработка исключений
	{
		First.set_surname("Петров");
		First.set_name("Пётр");
		First.set_patron("Петрович");
		First.set_age(55);
		First.set_weight(66);
		
	}
	catch (invalid_argument err)
	{
		cout << err.what(); 
		return 0;
	}
	cout << First.tostring();
	cout << endl;
	

	Human1 man1;//объект man1 типа Human1
	
	try
	{
		man1.set_surname("Петров");//сеттер фамилии
		man1.set_name("Михаил");//сеттер имени
		man1.set_patron("Петрович");//сеттер отчества
		man1.set_age(40);//сеттер возраста
		man1.set_weight(65);//сеттер веса
	}
	catch (invalid_argument err)
		{
			cout << err.what();
			return 0;
		}
	cout << man1.tostring();
	cout << endl;



	Human1 man2;//объект man2 типа Human1
	
	try
	{
		man2.set_surname("Мясоедова ");
		man2.set_name("Алина");
		man1.set_patron("Олеговна");
		man2.set_age(45);
		man2.set_weight(70);
	}
	catch (invalid_argument err)
	{
		cout << err.what();
		return 0;
	}

	cout << man2.tostring();
	cout << endl;

	
	
	const int  n = 3;//выделение памятм под n значений типа int
	Human1 * array = new Human1[n];   // массив объектов класса Human1                
	array[0].set_all("Пётр", "Петров", "Петрович",1,1);      // нулевой элемент массива
	array[1].set_all("Михаил", "Петров","Петрович",40,65);     // первый
	array[2].set_all("Алина", "Мясоедова", "Олеговна",45,70);  //второй
	
	for (int i = 0; i < n; i++)//вывод объектов класса через массив
	{
		cout << "Человек №"<<i+1<<": "<< array[i].tostring() << endl;
		
	}
													
	

	delete[] array;           //     удаление массива для освобождения памяти     
    
	
}

