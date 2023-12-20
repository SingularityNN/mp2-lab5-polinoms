#include <iostream>
#include "TList.h"
#include "TPolinom.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	cout << "ѕолином с одним мономом:" << endl;
	TPolinom p1;
	TMonom a(3.22, 1, 2, 1);
	TMonom b(4.5, 3, 3, 2);
	TMonom c(2.0, 1, 1, 1);
	p1.AddMonom(a);
	cout << p1.ToString() << endl;

	p1.AddMonom(b);
	cout << "p1.AddMonom(b(4.5, 3, 3, 2)):" << endl << p1.ToString() << endl;

	p1.MultMonom(c);
	cout << "p1.MultMonom(c(2.0, 1, 1, 1)):" << endl << p1.ToString() << endl;

	string str;
	cout << "¬ведите полином p2: ";
	cin >> str;
	TPolinom p2(str);

	cout << "TPolinom p2(str):" << endl << p2.ToString() << endl;
	p1.AddPolinom(p2);
	cout << "p1.AddPolinom(p2):" << endl << p1.ToString() << endl;

	




	/*TPolinom p;
	TPolinom p1;

	TMonom a(4.5, 2, 3, 4);
	TMonom b(7.2, 1, 2, 3);
	TMonom c(1.2, 3, 2, 3);

	TMonom d(1.5, 1, 1, 1);
	TMonom e(3, 2, 2, 2);

	p.AddMonom(d);
	p.AddMonom(e);

	p1.AddMonom(d);
	p1.AddMonom(e);

	if (p == p1)
		cout << "true";
	else
		cout << "false";*/





	/*TPolinom p;
	TPolinom p1;

	TMonom a(4.5, 2, 3, 4);
	TMonom b(7.2, 1, 2, 3);
	TMonom c(1.2, 3, 2, 3);

	TMonom d(1.5, 1, 1, 1);
	TMonom e(3, 2, 2, 2);
	
	p.AddMonom(a);
	p.AddMonom(b);
	p.AddMonom(c);

	p1.AddMonom(d);
	p1.AddMonom(e);
	
	p = p * p1;*/



	/*TPolinom p;
	TMonom m(3.22, 5, 2, 7);
	TMonom a(4.5, 2, 3, 4);
	TMonom mult(2, 2, 2, 1);
	p.AddMonom(m);
	p.AddMonom(a);
	p = p * 2;*/


	/*string str;
	cout << "¬ведите полином: ";
	cin >> str;
	TPolinom p(str);*/


	/*TMonom m(3.22, 5, 2, 7);
	TMonom a(4.5, 2, 3, 4);
	p.AddMonom(m);
	p.AddMonom(a);*/




	/*THeadList<int> list;
	list.InsertLast(1);
	list.InsertLast(2);
	list.InsertLast(3);
	list.InsertLast(4);
	list.InsertLast(5);
	
	list.DeleteFirst();
	list.Reset();
	
	for (int i = 0; i < list.GetLength(); i++) {
		cout << list.GetCurrentItem() << endl;
		list.GoNext();
	}*/
	

	// здесь должна быть проверка работоспособности написанных вами классов
	

}