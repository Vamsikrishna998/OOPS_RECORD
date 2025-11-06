#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    // Constructor — called automatically when an object is created
    Employee(string empName, int empId) {
        name = empName;
        id = empId;
        cout << "Constructor called!" << endl;
        cout << "Employee Created: " << name << " (ID: " << id << ")\n";
    }

    // Member function to display employee details
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID  : " << id << endl;
    }

    // Destructor — called automatically when an object goes out of scope
    ~Employee() {
        cout << "Destructor called for Employee: " << name << " (ID: " << id << ")\n";
    }
};

int main() {
    cout << "Creating Employee Object...\n";
    Employee e1("John Doe", 101);  // Constructor is called here

    cout << "\nDisplaying Employee Information:\n";
    e1.display();

    cout << "\nExiting main function...\n";
    // When main ends, the destructor will be called automatically

    return 0;
}

