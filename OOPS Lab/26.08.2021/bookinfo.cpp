/*
    1.Create a class which stores name, author and price of a book. 
    Store information for n number of books. Display information of 
    all the books in a given price range using friend function.
*/

#include <iostream>

using namespace std;

class Book
{
    string name;
    string author;
    double price;

public:
    void input(int);
    void display(int);
    double getPrice() { return price; }
    friend void printInRange(Book B[], int);
};
void Book::input(int i)
{
    cout << "  Enter data for " << i << " Book " << endl;
    cout << "Enter book name  : " << flush;
    cin.ignore();
    getline(cin, name);
    cout << "Enter author name: " << flush;
    cin.ignore();
    getline(cin, author);
    cout << "Enter book price : " << flush;
    cin >> price;
}
void Book::display(int i)
{
    cout << "   Displaying for Book " << i << "  " << endl;
    cout << "Name   : " << name << endl;
    cout << "Author : " << author << endl;
    cout << "Price  : " << price << endl;
}
void priceInRange(Book B[], int n)
{
    double lb, ub;
    cout << "Enter lower bound for price: " << flush;
    cin >> lb;
    cout << "Enter upper bound for price: " << flush;
    cin >> ub;
    for (int i = 0; i < n; i++)
    {
        if (B[i].getPrice() >= lb && B[i].getPrice() <= ub)
        {
            B[i].display(i + 1);
        }
    }
}
int main()
{
    int n;
    cout << "Enter number of entries: " << flush;
    cin >> n;
    Book *B = new Book[n];
    for (int i = 0; i < n; i++)
    {
        B[i].input(i + 1);
    }
    priceInRange(B, n);
}