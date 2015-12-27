#pragma once
#include "Build.h"


class Entity
{
public:

	void Sort(Build *r)
	{
		int l = r->Length();
		int sort = 0;
		while (sort != l)
		{
			int max = r->Get(l - 1)->stalk.GetLength();
			int maxn = l - 1;
			for (int i = l - 2; i >= sort; i--)
			{
				if (r->Get(i)->stalk.GetLength() > max)
				{
					max = r->Get(i)->stalk.GetLength();
					maxn = i;
				}
			}
			Flower *buf = r->Get(maxn);
			if (!buf)
			{
				cout << "Ошибка!" << endl;
				return;
			}
			if (!r->Del(maxn))
			{
				cout << "Ошибка!" << endl;
				return;
			}
			r->add(buf);
			sort++;
		}
	}
	void Delta(Build *r, int a, int b)
	{
		for (int i = 0; i < r->Length(); i++)
		{
			if (r->Get(i)->stalk.GetLength()> a && r->Get(i)->stalk.GetLength() < b)
			{
				r->Get(i)->print();
			}
		}
	}
	void Cost(Build *r)
	{
		int summ = 0;
		for (int i = 0; i < r->Length(); i++)
		{
			summ = summ + r->Get(i)->GetCost();
		}
		cout << "Цена = " << summ << endl;
	}
};
