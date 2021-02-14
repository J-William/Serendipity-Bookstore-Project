#include <iostream>
#include <string>
using namespace std;

int main()
{
	string date, isbn, title;
	int quantity;
	float unitPrice, unitTotal;


	// Request transaction data
	cout << "Transaction started.." << endl;
	cout << "Enter date of transaction in the form MM/DD/YY:  " << endl;
	cin >> date;
	cout << "Enter the quantity of the first title: " <<endl;
	cin >> quantity;
	cout << "Enter the ISBN of the book: " <<endl;
	cin >> isbn;
	cout << "Enter the title of the book: " << endl;
	cin.ignore();
	getline(cin, title);
	cout << "Enter the unit price of the book: " <<endl;
	cin >> unitPrice;

	// Calculate unit total
	unitTotal = unitPrice * quantity;


	// Output transaction slip
	cout << "Serendipity Book Sellers" << endl << endl;
	cout << "Date: " << date << endl << endl;
	cout << "Qty    ISBN\tTitle\t\tPrice\tTotal" << endl;
	cout << "----------------------------------------------" << endl << endl;
	cout << quantity << "    " << isbn << "\t" << title << "\t\t" << unitPrice << "\t" << unitTotal << endl << endl;



	cout << "           \tSubtotal" << endl;
	cout << "           \tTax     " << endl;
	cout << "           \tTotal   " << endl << endl;
	cout << "Thank You for Shopping at Serendipity!" << endl;

	return 0;


}