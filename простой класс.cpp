// простой класс.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Простой класс.Разработала Мясоедова Алина,студентка группы ВМК-20

#include<iostream>
#include<string>

#include"Human1.h"

using namespace std;


int main() {
	
	setlocale(LC_ALL, "RUS");

	Human1 First;
	//First.set_age(55);
	//cout << First.get_age()<<endl;
	//First.set_weight(65);
	//cout << First.get_weight()<<endl;
	//First.set_name("Петров Пётр Петрович");
	//cout << First.get_name()<<endl;
	
	
	try 
	{
		First.set_surname("Петров");
		First.set_name("Пётр");
		First.set_patron("Петрович");
		First.set_age(-55);
		First.set_weight(66);
		
	}
	catch (invalid_argument err)
	{
		cout << err.what(); 
		return 0;
	}
	cout << First.tostring();
	cout << endl;
	

	Human1 man1;
	
	try
	{
		man1.set_surname("Петров");
		man1.set_name("Михаил");
		man1.set_patron("Петрович");
		man1.set_age(40);
		man1.set_weight(65);
	}
	catch (invalid_argument err)
		{
			cout << err.what();
			return 0;
		}
	cout << man1.tostring();
	cout << endl;



	Human1 man2;
	
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

	
	
	const int  n = 3;
	Human1 * array = new Human1[n];   // массив объектов класса Human1                
	array[0].set_all("Пётр", "Петров", "Петрович",1,1);       
	array[1].set_all("Михаил", "Петров","Петрович",40,65);     
	array[2].set_all("Алина", "Мясоедова", "Олеговна",45,70);  
	
	for (int i = 0; i < n; i++)
	{
		cout << "Человек №"<<i+1<<": "<< array[i].tostring() << endl;
		
	}
													
	
	delete[] array;                     

	
}

