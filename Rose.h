#pragma once
#include "Flower.h"
#include "Packing.h"
class Rose :public Flower
{
public:
	Rose()
	{
		//cout << "Constructor Rose" << endl;
		SetType(2);
	}
	~Rose()
	{
		//cout << "Destructor Rose" << endl;
	}
	Packing Pack;
	virtual void print()
	{
	
		cout << "Роза" << endl;
		cout << "Материал упаковки - " << Pack.GetMaterial() << endl;
		cout << "Цвет - " << GetColor() << endl;
		cout << "Длина стебля - " << stalk.GetLength() << endl;
		cout << "стебель - ";
		if (stalk.GetThorns())
		{
			cout << "колючий " << endl;
		}
		else
		{
			cout << "не колючий" << endl;
		}
	}
};
