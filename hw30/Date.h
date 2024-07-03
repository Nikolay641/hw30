#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Date
{
	int day;
	int month;
	int year;

	bool isLeapYear() const; //�������� �� ���������� ���

	int monthDays() const; //���������� ���� �� ������

	void nextDate(); //��������� ����

	void prevDate(); //���������� ����

public:
	Date(); // �� ���������  - ������� ����

	Date(int year, int month, int day); //� ����������� - �������� ����

	Date(const Date& obj); //�����������

	Date& operator = (const Date& obj);

	~Date();// ����������

	void showDate() const;

	//---------���������---------

	void setYear(int year);

	int getYear()const;

	void setMonth(int month);

	int getMonth()const;

	void setDay(int day);

	int getDay()const;

	bool valid()const; //�������� ���� �� ������������
	
	//--------- ��������� ��������� ---------

	bool operator == (const Date& obj)const&;

	bool operator != (const Date& obj)const&;

	bool operator > (const Date& obj)const&;

	bool operator < (const Date& obj)const&;

	bool operator >= (const Date& obj)const&;

	bool operator <= (const Date& obj)const&;

	//--------- ��������� ���������� ---------     

	Date& operator += (int days); //�������� days ���� � ����

	Date& operator -= (int days); //������� days ���� �� ����

	Date& operator += (float months); //�������� months ������� � ����

	Date& operator -= (float months); //������� months ������� �� ����

	Date& operator += (long years); //�������� years ��� � ����

	Date& operator -= (long years); //������� years ��� �� ����

	//--------- Arithmetic operators ---------

	Date operator + (int days)const&;

	Date operator - (int days)const&;

	Date operator + (float months)const&;

	Date operator - (float months)const&;

	Date operator + (long years)const&;

	Date operator - (long years)const&;

	//--------- Input/output operators ---------

	friend ostream& operator << (ostream& os, const Date& t);

	friend istream& operator >> (istream& is, Date& t);

	//--------- v2 arithmetic operators ---------

	friend Date operator + (int n, Date a);

	friend Date operator - (int n, Date a);

	Date& operator -- (); //prefix

	Date operator -- (int n); //postfix
	 
	Date& operator ++ (); //prefix

	Date operator ++ (int n); //postfix
};

