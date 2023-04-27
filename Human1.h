//������� �����.����������� ��������� �����,��������� ������ ���-20

#pragma once
#include<string>
#include <iostream>

using namespace std;

/// <summary>
/// ����� �����e�
/// </summary>
class Human1 
{
private:
	/// <summary>
	/// �������
	/// </summary>
	int age;
	/// <summary>
	/// ���
	/// </summary>
	int weight; 
	/// <summary>
	/// ���
	/// </summary>
	string name;
	/// <summary>
	/// �������
	/// </summary>
	string surname;
	/// <summary>
	/// ��������
	/// </summary>
	string patron;
public:

	// ����������� �� ���������
	Human1();

	// ����������� � �������� ������
	Human1(string _name,string _surname, string _patron, int _age, int _weight);

	string get_surname() const;
	void set_surname(string surname1);
	string get_patron() const;
	void set_patron(string patron1);
	int get_age() const;///���������� �������
	int get_weight() const;//���������� ���
	void set_age(int age1); //��������� �������
	void set_weight(int weight1);//��������� ���
	string get_name() const;//��������� ���
	void set_name(string name1);//��������� ���
	string tostring() const;
	void set_all(string _name, string _surname, string _patron, int _age, int _weight); 

};

