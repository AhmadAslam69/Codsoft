#include<iostream>
#include<iomanip>

using namespace std;




void sum(float num1,float num2)
{
	float sum;
	sum = num1 + num2;
	cout << num1 << " + " << num2 << " = " << sum << endl << endl;
	
}

void mul(float num1, float num2)
{
	float sum;
	sum = num1 * num2;
	cout << num1 << " x " << num2 << " = " << sum << endl << endl;

}

void div(float num1, float num2)
{
	float sum;
	sum = num1 / num2;
	cout << num1 << " / " << num2 << " = " << sum << endl << endl;

}

void sub(float num1, float num2)
{
	float sum;
	sum = num1 - num2;
	cout << num1 << " - " << num2 << " = " << sum << endl << endl;

}


int main()
{
	cout << endl;

	system("color 97");
	float num1;
	float num2;

	int choi;

	cout << setfill(' ') << setw(60);
	
	cout << "WELCOME TO CALCULATOR ";

	cout << endl << endl;

	cout << "enter num1 : ";
	cin >> num1;

	cout << "enter num2 : ";
	cin >> num2;

	cout << endl;

	cout << "Which of the following operation do you want to perform ?" << endl << endl;

	do {


		cout << "1. Addition (+) " << endl;
		cout << "2. Multiplication (*)  " << endl;
		cout << "3. Subtraction (-)  " << endl;
		cout << "4. Division (/) " << endl;
		cout << "5. exit" << endl << endl;
		cout << "Enter your choice:  ";
		cin >> choi;



		switch (choi)
		{
		case 1:
			sum(num1, num2);
			break;

		case 2:
			mul(num1, num2);
			break;
		case 3:
			sub(num1, num2);
			break;

		case 4:
			div(num1, num2);
			break;

		default:

			return 0;
			break;


		}


	} while (5);

	return 0;



}


