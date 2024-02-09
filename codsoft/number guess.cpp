#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>


using namespace std;




int main()
{

	int guess=0;


	system("color C0");

	cout << setfill('*') << setw(120);
	cout << " " << endl;

	cout << setfill(' ') << setw(75);
	cout << "**** WELCOME TO NUMBER GUESSING GAME ****" << endl;

	cout << setfill('*') << setw(120);
	cout << " " << endl << endl;

	cout << "The Program has Generate A random number : **** " << endl <<endl;

	srand((unsigned int)time(NULL));
	int ran = (rand() % 100)+ 1 ;
	
	

	do 
	{
		cout << "Enter your Guess : " ;
		cin >> guess;

	

	    if (guess < ran)
		{
			cout << "Your Guess was low" <<endl <<endl;
			
		}
		else if (guess > ran)
		{
			cout << "Your Guess was high" <<endl <<endl;

		}
		else if (guess == ran)
		{

			cout << "Random Number Was : " << ran << endl << endl;
			 cout << "CONGRATS You Guessed the number " << endl << endl;


		}


	}while( guess!= ran);





}