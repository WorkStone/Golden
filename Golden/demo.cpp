#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

void Golden(int num[10]);
void Login();
void Enter();

int main()
{
	int num_m[10];
	Golden(num_m);

	system("pause");
	return 0;
}

void Login()
{

}

void Enter()
{

}

void Golden(int num[10])
{	
	int sum = 0;
	double average = 0;
	int min = 0;
	int temp[10];
	cout << "����10��0��100�����֣�" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "����� " << i + 1 << " ������";
		cin >> num[i];
		if (num[i] > 100 || num[i] < 0)
		{
			cout << "�����������������룡" << endl;
			i--;
		}
		else
		{
			cout << endl;
			sum += num[i];
		}
	}
	cout << "ƽ����averageΪ��";
	average = (sum / 10) * 0.6;
	cout << average << endl;
	for (int n = 0; n < 10; n++)
	{
		if (average > num[n])
		{
			temp[n] = average - num[n];
		}
		else
		{
			temp[n] = num[n] - average;
		}
	}
	int i = 0;
	while (i < 10)
	{
		if (temp[i] <= temp[min])
		{
			min = i;
		}
		i++;
	}
	cout << "��" << min+1 << "λ�û�������" << num[min] << " ��ӽ��ƽ�㣡" << endl;
}