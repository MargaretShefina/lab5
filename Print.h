#pragma once
#include "Rose.h"
#include "Chrys.h"
#include <iostream>
using namespace std;
class MyPrint
{
public:
	MyPrint()
	{
		//cout << "Constructor MyPrint" << endl;
	}
	~MyPrint()
	{
		//cout << "Destructor MyPrint" << endl;;
	}
	virtual void Pr(Rose p)
	{
		cout << "Роза" << endl;
	}
	virtual void Pr(Chrys p)
	{
		cout << "Хризантема" << endl;
	}
};
class RPrint :public MyPrint
{
public:
	RPrint()
	{
		//cout << "Constructor Rprint" << endl;
	}
	~RPrint()
	{
		//cout << "Destr RPrint" << endl;
	}
	virtual void Pr(Rose p)
	{
		cout << "Роза" << endl;
		cout << "Материал Упаковки - " << p.Pack.GetMaterial() << endl;
		cout << "Цвет - " << p.GetColor() << endl;
		cout << "Длина Стебля - " << p.stalk.GetLength() << endl;
		cout << "Стебель - ";
		if (p.stalk.GetThorns())
		{
			cout << "колючий" << endl;
		}
		else
		{
			cout << "гладкий" << endl;
		}
	}
};
class ChrPrint :public MyPrint
{
public:
	ChrPrint()
	{
		//cout << "Constructor ChrPrint" << endl;
	}
	~ChrPrint()
	{
		//cout << "Destructor ChrPrint" << endl;
	}
	virtual void Pr(Chrys p)
	{
		cout << "Хризантема" << endl;
		cout << "Материал упаковки - " << p.Pack.GetMaterial() << endl;
		cout << "Цвет - " << p.GetColor() << endl;
		cout << "Длина стебля - " << p.stalk.GetLength() << endl;
		cout << "Стебель - ";
		if (p.stalk.GetThorns())
		{
			cout << "колючий" << endl;
		}
		else
		{
			cout << "не колючий" << endl;
		}
	}
};
