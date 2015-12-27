#pragma once
#include "Flower.h";
#include "Packing.h"


class Chrys :public Flower
{
public:
	Chrys()
	{
		//cout << "Constructor Chrys" << endl;
		SetType(1);
	}
	~Chrys()
	{
		//cout << "Destr Chrys" << endl;
	}
	Packing Pack;
	virtual void print()
	{
		cout << "---------------------------------------" << endl;
		cout << "Хризантема" << endl;
		cout << "Материал упаковки - " << Pack.GetMaterial() << endl;
		cout << "Цвет - " << GetColor() << endl;
		cout << "Длина стебля - " << stalk.GetLength() << endl;
		cout << "Стебель - ";

		if (stalk.GetThorns())
		{
			cout << "колючий" << endl;
		}
		else
		{
			cout << "не колючий" << endl;
		}
	}
};
