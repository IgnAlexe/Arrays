#include<iostream>
#include<conio.h>
using namespace std;

#define  CONCLUSION_F
#define CONCLUSION_B
#define SUMM
#define AVARAGE
#define MAX_MIN
void main()
{
	const int  m=5;
	int n[m]{};
	//cout << "Введите количество элементов массива: " < ; cin >> m;
	for (int i = 0; i < m; i++)
	{
		setlocale(LC_ALL, "");
		cout << "Введите элемент массива:  "<< i<< "\t";cin >> n[i];
		cout << endl;
	}
#if defined CONCLUSION_F
	cout << "Массив вперед: ";
	for (int i = 0; i < m; i++)
	{
		cout << n[i] << "  ";
	}
	cout << endl;
#endif // CONCLUSION_F
#if defined CONCLUSION_B
	cout << "Массив назад: ";
	for (int i = m-1; i >= 0; i--)
	{
		cout<< n[i] << "  ";
	}
	cout << endl;

#endif // CONCLUSION_B
#if defined SUMM
	int s=0;
	for (int i = 0; i < m; i++)
	{
		s =s+ n[i];
	}
	cout<<"Сумма:\t" << s << endl;
#endif //SUMM
#if defined AVARAGE
	double a=0;
	for (int i = 0; i < m; i++)
	{
		 a = (a + n[i])/m;
	}
	cout << "Средне-аревметическое:\t" << a << endl;
#endif //AVARAGE
#if defined MAX_MIN
	int max=0;
	int min=n[0];
	for (int i = 0; i < m; i++)
	{
		if (n[i]>max) max = n[i];
		else if (n[i]<min) min = n[i];
	}
	cout<< "Максимальное число ряда:\t" << max << endl << "Минимальное число ряда:\t"<<min<<endl;
#endif
}