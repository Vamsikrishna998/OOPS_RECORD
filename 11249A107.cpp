#include <iostream>
using namespace std;

class Books {
private:
    char ISBN[50], book_name[50], author[50];
    int pages, acc_no;
    float price;

public:
    void getDetails() {
        cout << "Enter ISBN: ";
        cin >> ISBN;

        cout << "Enter book name: ";
        cin.ignore(); // To ignore leftover newline character
        cin.getline(book_name, 50);

        cout << "Enter author: ";
        cin.getline(author, 50);

        cout << "Enter number of pages: ";
        cin >> pages;

        cout << "Enter Acc No: ";
        cin >> acc_no;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nBook Details:\n";
        cout << "ISBN: " << ISBN << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
        cout << "Acc No: " << acc_no << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Books b;
    b.getDetails();
    b.display();
    return 0;
}