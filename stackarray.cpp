#include <iostream>
#include <istream>

using namespace std;


#define MAX 10

void push(int stack[], int *top, int value);
void pop(int stack[], int *top, int *value);


int main()
{
	int stack[MAX];
	int top = -1;
	int n, value;

	do
	{
		do
		{
			cout << "Masukkan Nilai Yang ingin di push : ";
				cin >> value;
			push(stack, &top, value);
			cout<<"Tekan 1 Untuk Melanjutkan : ";
			cin >> n;
		} while (n==1);
		cout << "Tekan 1 untuk melanjutkan pop ; ";
		cin >> n;

		while (n == 1)
		{
			pop(stack, &top, &value);
			cout << "Nilai Yang Di POP : " << value << endl;
			cout << "tekan 1 untuk melanjutkan pop element : ";
			cin >> n;
		}
		cout << endl;
		cout << "Tekan 1 untuk melanjutkan : ";
		cin >> n;

	} while (n == 1);
    return 0;
}

void push(int stack[], int *top, int value)
{
	if (*top<MAX)
	{
		*top = *top + 1;
		stack[*top] = value;
	}
	else
	{
		cout << "Stack penuh, Push nilai tidak dapat dilakukan !" << endl;
		exit(0);
	}
}

void pop(int stack[], int *top, int *value)
{
	if (*top >= 0)
	{
		*value = stack[*top];
		*top = *top - 1;
	}
	else
	{
		cout << "Stack Kosong, POP tidak dapat dilakukan !" << endl;
		exit(0);
	}
}
