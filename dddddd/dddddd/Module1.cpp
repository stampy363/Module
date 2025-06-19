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
	cout << "Введите кол-во записей:";
	cin >> n;
	Data* arr = new Data[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Запись " << i + 1 << endl;
		cout << " Название препарата:";
		cin >> arr[i].name;
		cout << " Количество:";
		cin >> arr[i].kol;
		cout << " Цена:";
		cin >> arr[i].chena;
		cout << " Срок хранения(в месяцах):";
		cin >> arr[i].srok;
		fout << arr[i].name << " " << arr[i].kol << " " << arr[i].chena << " " << arr[i].srok << endl;
	}
	fout.close();
	delete[] arr;
}