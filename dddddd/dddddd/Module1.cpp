#include "Module1.h"

struct Data
{
	string name;
	string kol;
	string chena;
	string srok;
};
void enter()
{
	ofstream fout("Assort.txt");
	int n;
	cout << "������� ���-�� �������:";
	cin >> n;
	Data* arr = new Data[n];
	for (int i = 0; i < n; i++)
	{
		cout << "������ " << i + 1 << endl;
		cout << " �������� ���������:";
		cin >> arr[i].name;
		cout << " ����������:";
		cin >> arr[i].kol;
		cout << " ����:";
		cin >> arr[i].chena;
		cout << " ���� ��������(� �������):";
		cin >> arr[i].srok;
		fout << arr[i].name << " " << arr[i].kol << " " << arr[i].chena << " " << arr[i].srok << endl;
	}
	fout.close();
	delete[] arr;
}