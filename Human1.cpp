//������� �����.����������� ��������� �����,��������� ������ ���-20


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
	if (surname1 != "") // ���� �� ������ ���� ������
		this->surname = surname1; //�������� ����������
	else throw invalid_argument("������� �������"); //����������
}

string Human1::get_patron() const
{
	return patron;
}

void Human1::set_patron(string patron1) // const string & patron1
{
	if (patron1 != "") // ���� �� ������ ���� ������
		this->patron = patron1; //�������� ����������
	else throw invalid_argument("������� ��������"); //����������
}

int Human1::get_age() const { return age; } //���������� �������

void Human1::set_age(int age1) //���������� ��������
{
	if (age1 >= 0) //�������� ����������
		age = age1; //������� ����� ����������� ��������
	else 
		throw invalid_argument(" ������� ������ ����	������ ��� ����� 0"); //������� ����������
}

int Human1::get_weight() const { return weight; } //���������� ���

void Human1::set_weight(int weight1) //���������� ����
{
	if (weight1 > 0) this->weight = weight1; //�������� ����������
	else throw invalid_argument("��� �� ������ ���� ����� 0");//������� ����������
}


string Human1::get_name() const { return name; }// ���������� ���

void Human1::set_name(string name1) // ����������
{
	if (name1 != "") // ���� �� ������ ���� ������
		this->name = name1; //�������� ����������
	else throw invalid_argument("������� ������"); //����������

}

string Human1::tostring() const //�������������� ������ � ������
{
	 
	return surname+" " + name +" "+ patron + " ������� " + to_string(age) + " ��� " + to_string(weight)+'\n';

}

void Human1::set_all(string _name, string _surname, string _patron, int _age, int _weight)
{
	set_name(_name);
	set_surname(_surname);
	set_patron(_patron);
	set_age(_age);
	set_weight(_weight);

};