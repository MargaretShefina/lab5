#include "stdafx.h"
#include "Print.h"
#include "Build.h"
#include "Entity.h"



Element *Build::head = NULL;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	Rose Rose1;
	Rose1.SetColor("Красный");
	Rose1.stalk.SetLength(30);
	Rose1.stalk.SetThornsh(true);
	Rose1.Pack.SetMaterial("Пластик");
	Rose1.setCost(200);

	Chrys Chr1;
	Chr1.SetColor("Белый");
	Chr1.stalk.SetLength(20);
	Chr1.stalk.SetThornsh(false);
	Chr1.Pack.SetMaterial("Картон");
	Chr1.setCost(150);

	Chrys Chr2;
	Chr2.SetColor("Белый");
	Chr2.stalk.SetLength(10);
	Chr2.stalk.SetThornsh(false);
	Chr2.Pack.SetMaterial("Картон");
	Chr2.setCost(100);

	Build *R = new Build;
	R->add(&Chr1);
	R->add(&Rose1);
	R->add(&Chr2);
	cout << "/////////////////////////////////////" << endl;
	R->show();
	cout << "////////////////////////////////////" << endl;
	Entity S;
	S.Sort(R);
	R->show();
	cout << "////////////////////////////////////" << endl;
	S.Delta(R, 15, 25);
	cout << "////////////////////////////////////" << endl;
	S.Cost(R);
	system("pause");
}
