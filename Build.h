#pragma once
#include <iostream>
#include "Print.h"



class  Element
{
public:
	Element();
	~Element();
	Flower *element;
	Element *next;
	Element(Flower *a, Element *n)
	{
		element = a;
		next = n;
	}
private:

};

Element::Element()
{
}

Element::~Element()
{
}


class Build
{

protected:
	static Element *head;
public:
	Build()
	{
		head = NULL;
	};


	void add(Flower* p)
	{
		if (head == NULL)
		{
			head = new Element(p, NULL);
		}
		else
		{
			head = new Element(p, head);
		}

	}



	static void show()
	{
		Element *e = head;

		while (e != NULL)
		{
			e->element->print();
			e = e->next;
		}

	}

	Flower *Get(int a)
	{
		auto e = head;
		if (e)
		{
			for (int i = 0; i<a && e != NULL; i++)
			{
				e = e->next;
			}
			if (e)
			{
				return e->element;
			}
			else
			{
				return NULL;
			}
		}
		else
		{
			return NULL;
		}
	}
	bool Del(int a)
	{
		auto e = head;
		if (e)
		{
			if (a == 0)
			{
				auto b = e->next;
				delete head;
				head = b;
				return true;
			}
			else
			{
				auto buf = head;
				for (int i = 0; i<a; i++)
				{
					buf = e;
					e = e->next;
					if (e == NULL)
					{
						return false;
					}
				}
				if (e)
				{
					buf->next = e->next;
					delete e;
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
	int Length()
	{
		int col = 0;
		auto e = head;
		while (e)
		{
			col++;
			e = e->next;
		}
		return col;
	}

};
