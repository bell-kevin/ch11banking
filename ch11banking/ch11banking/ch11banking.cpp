// ch11banking.cpp : simulate a bank where a user has a checking account and can make withdrawals and deposits to that account

#include <iostream>

//base Account class

using namespace std;
class Account {
private:
	double balance;
	string name;
public:
	Account(double balance, string name) {
		this->balance = balance;
		this->name = name;
	}
	void withdraw(double amount) {
		if (balance >= amount) {
			balance -= amount;
		}
		else {
			cout << "Insufficient funds" << endl;
			// add fee back to balance
			balance += 2.5;
		}
	}
	void deposit(double amount) {
		balance += amount;
	}
	void display() {
		cout << "Balance: $" << balance << endl;
	}
};

//derived class for a checking account

class CheckingAccount : public Account {
private:
	double fee;
public:
	CheckingAccount(double balance, string name, double fee) : Account(balance, name) {
		this->fee = fee;
	}
	void withdraw(double amount) {
		Account::withdraw(amount);
		Account::withdraw(fee);
	}
	void deposit(double amount) {
		Account::deposit(amount);
		Account::withdraw(fee);
	}
};



int main()
{
    cout << "Chapter 11 by Kevin Bell\n\n";
	cout << "Please enter your name: ";
	string name;
	cin >> name;
	cout << name << ", initial account settings: Balance = $" << 1000 << ", Fee = $" << 2.5 << endl;
	// Create a checking account with a balance of $1000 and a fee of $2.5
	CheckingAccount account(1000, name, 2.5);
	char choice;
	double amount;
	do {
		cout << "Would you like to (W)ithdraw, (D)eposit, or (Q)uit? ";
		cin >> choice;
		if (choice == 'W' || choice == 'w') {
			cout << "How much would you like to withdraw? $";
			cin >> amount;
			account.withdraw(amount);
			//display balance after withdrawl
			account.display();
		}
		else if (choice == 'D' || choice == 'd') {
			cout << "How much would you like to deposit? $";
			cin >> amount;
			account.deposit(amount);
			account.display();
		}
		else if (choice == 'Q' || choice == 'q') {
			cout << "Thank you for banking with us!" << endl;
		}
		else {
			cout << "Invalid choice" << endl;
		}
	} while (choice != 'Q' && choice != 'q');
	system("pause");
	return 0;
} // end main function
