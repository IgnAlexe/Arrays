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
	//cout << "������� ���������� ��������� �������: " < ; cin >> m;
	for (int i = 0; i < m; i++)
	{
		setlocale(LC_ALL, "");
		cout << "������� ������� �������:  "<< i<< "\t";cin >> n[i];
		cout << endl;
	}
#if defined CONCLUSION_F
	cout << "������ ������: ";
	for (int i = 0; i < m; i++)
	{
		cout << n[i] << "  ";
	}
	cout << endl;
#endif // CONCLUSION_F
#if defined CONCLUSION_B
	cout << "������ �����: ";
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
	cout<<"�����:\t" << s << endl;
#endif //SUMM
#if defined AVARAGE
	double a=0;
	for (int i = 0; i < m; i++)
	{
		 a = (a + n[i])/m;
	}
	cout << "������-��������������:\t" << a << endl;
#endif //AVARAGE
#if defined MAX_MIN
	int max=0;
	int min=n[0];
	for (int i = 0; i < m; i++)
	{
		if (n[i]>max) max = n[i];
		else if (n[i]<min) min = n[i];
	}
	cout<< "������������ ����� ����:\t" << max << endl << "����������� ����� ����:\t"<<min<<endl;
#endif
}