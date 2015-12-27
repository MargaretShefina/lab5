#pragma once
#include <String>
using namespace std;

class Packing
{
	string material;

public:
	Packing()
	{
		//cout << "Constructor Packing" << endl;
	}

	~Packing()
	{
		//cout << "Destructor Packing" << endl;
	}

	void SetMaterial(string s)
	{
		material = s;
	}

	string GetMaterial()
	{
		return material;
	}
};
