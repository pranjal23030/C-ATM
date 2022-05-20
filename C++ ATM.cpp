#include <iostream>
using namespace std;

void showMenu() {
	cout << "**********MENU**********" <<endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit Money" << endl;
	cout << "3. Withdraw Money" << endl;
	cout << "4. Exit" << endl;
	cout << "************************" <<endl;
}

int main () {
	//check the balance, deposit money, withdraw money, show the menu
	int option; 
	double balance= 500;
	
	do { 
	showMenu ();
	cout << "Choose the option give: ";
	cin >> option;
	system("cls"); //command to clear the console
	
	switch (option) {
		case 1:
			cout << "The balance is: " << balance << "$" << endl;
			break;
		case 2:
			cout << "Enter the amount you wanna deposit: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		case 3:
			cout << "Enter the amount you wanna withdraw: ";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)
			balance -= withdrawAmount;
			else 
			cout << "Not sufficienct money" << endl;
			break;
	}
    } while (option!=4);

	
	system ("pause>0");
} 
