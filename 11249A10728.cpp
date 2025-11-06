#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class ElectricityBill {
private:
    string customerName;
    int customerID;
    double units, totalAmount;

public:
    // Function to input customer details
    void input() {
        cout << "Enter Customer Name: ";
        getline(cin, customerName);
        cout << "Enter Customer ID: ";
        cin >> customerID;
        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    // Function to calculate bill based on units
    void calculateBill() {
        double chargePerUnit;

        if (units <= 100)
            chargePerUnit = 1.20;
        else if (units <= 300)
            chargePerUnit = 2.00;
        else if (units <= 500)
            chargePerUnit = 3.00;
        else
            chargePerUnit = 5.00;

        totalAmount = units * chargePerUnit;

        // Add fixed meter charge
        totalAmount += 50;  
    }

    // Function to display the bill
    void display() {
        cout << fixed << setprecision(2);
        cout << "\n--------------------------------------\n";
        cout << "           ELECTRICITY BILL           \n";
        cout << "--------------------------------------\n";
        cout << "Customer Name : " << customerName << endl;
        cout << "Customer ID   : " << customerID << endl;
        cout << "Units Used    : " << units << endl;
        cout << "--------------------------------------\n";
        cout << "Total Amount  : Rs. " << totalAmount << endl;
        cout << "--------------------------------------\n";
    }
};

int main() {
    ElectricityBill eb;
    cout << "=== ELECTRICITY BILL CALCULATION ===\n";
    cin.ignore();  // clear input buffer
    eb.input();
    eb.calculateBill();
    eb.display();

    return 0;
}
