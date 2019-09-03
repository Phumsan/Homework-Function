#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
float update_balance(string command,float dollars,float &balance);
int main()
{
	float dollars;
	float balance = 10000;
	string command;
	cout << "Exit with 0\n";
	cout << fixed;
        cout << setprecision(2);
	cout << "Your balance : " << balance << endl; 
	do{
		cout << "Input command (1 or withdraw, 2 deposit ) : ";
		cin >> command;
		if(command == "1" || command == "2")
		{
			cout << "Input amount : ";
		    cin >> dollars;
		    cout << "Your balance : " << update_balance(command,dollars,balance) << endl;
		}
	}while(command != "0");

}
float update_balance(string command,float dollars,float &balance)
{
	if(command == "1")
	{
		return(balance = balance-dollars);
	}
	else if(command == "2")
	{
		return(balance = balance+dollars);
	}
}




