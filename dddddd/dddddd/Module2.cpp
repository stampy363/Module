#include "Module2.h"

struct Data
{
	string name;
	string kol;
	string chena;
	string srok;
};

void find()
{
	string  enter_kol, enter_chena;
	int x = 0;
	ifstream fin("Assort.txt");
	ofstream fout("intermediate.txt");
	while (true)
	{
		string v;
		getline(fin, v);
		if (!fin.eof())
			x++;
		else
			break;
	}
	fin.clear();
	fin.seekg(0);
	Data* arr1 = new Data[x];
	for (int i = 0; i < x; i++)
	{
		fin >> arr1[i].name >> arr1[i].kol >> arr1[i].chena >> arr1[i].srok;
	}
	cout << "Введите название препарата:";
	cin >> enter_kol;
	fout << endl << "По введенному препарату-" << enter_kol << ": ";
	cout << "Результат:" << endl;
	for (int i = 0; i < x; i++)
	{
		if (arr1[i].kol == arr1[i].kol)
		{
			if(arr1[i].name == enter_kol)
			{
				cout << arr1[i].kol << endl;
				fout << arr1[i].kol << "; ";
			}
			
		}
	}
	cout << "Введите цену:";
	cin >> enter_chena;
	fout << endl << "По введенной ценной-" << enter_chena << ": ";
	cout << "Результат:" << endl;
	for (int i = 0; i < x; i++)
	{
		if (arr1[i].chena == arr1[i].chena)
		{
			if (enter_chena<arr1[i].chena)
			{
				cout << "Cамый дорогой препарат" << arr1[i].chena << endl;
				fout << arr1[i].chena << "; ";
			}
			else if (enter_chena>arr1[i].chena)
			{
				cout <<"Cамый дешевый препарат"<< arr1[i].chena << endl;
				fout << arr1[i].chena << "; ";
			}
			else
			{
				cout << "средний по цене  препарат" << arr1[i].chena << endl;
				fout << arr1[i].chena << "; ";
			}

		}
	}
	fout.close();
	fin.close();
	delete[] arr1;
}