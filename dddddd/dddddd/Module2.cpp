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
	cout << "������� �������� ���������:";
	cin >> enter_kol;
	fout << endl << "�� ���������� ���������-" << enter_kol << ": ";
	cout << "���������:" << endl;
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
	cout << "������� ����:";
	cin >> enter_chena;
	fout << endl << "�� ��������� ������-" << enter_chena << ": ";
	cout << "���������:" << endl;
	for (int i = 0; i < x; i++)
	{
		if (arr1[i].chena == arr1[i].chena)
		{
			if (enter_chena<arr1[i].chena)
			{
				cout << "C���� ������� ��������" << arr1[i].chena << endl;
				fout << arr1[i].chena << "; ";
			}
			else if (enter_chena>arr1[i].chena)
			{
				cout <<"C���� ������� ��������"<< arr1[i].chena << endl;
				fout << arr1[i].chena << "; ";
			}
			else
			{
				cout << "������� �� ����  ��������" << arr1[i].chena << endl;
				fout << arr1[i].chena << "; ";
			}

		}
	}
	fout.close();
	fin.close();
	delete[] arr1;
}