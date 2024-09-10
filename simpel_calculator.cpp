#include <iostream>
#include <string>
#include <limits>

using namespace std;
int main() {
    string flag = "yY";
    char uin; // user input

    cout << "Do you want to use the calculator? (y/n): ";
    cin >> uin;
    int pos = flag.find(uin);

    while (pos != string::npos) {
        double no1, no2;
        string fun;
        cout << "Loading program to do simple operations on 2 numbers" << endl;
        cout << "Listed below are the operations that can be performed:" << endl;
        cout << "For addition enter - add" << endl;
        cout << "For subtraction enter - sub" << endl;
        cout << "For multiplication enter - mul" << endl;
        cout << "For division enter - div" << endl;

        cout << "Enter first number: ";
        cin >> no1;
        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You have entered a non-numerical number! Try again: ";
            cin >> no1;
        }

        cout << "Enter second number: ";
        cin >> no2;
        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You have entered a non-numerical number! Try again: ";
            cin >> no2;
        }

        cout << "Enter operation code to perform: ";
        cin >> fun;
        if (fun == "add") {
            cout << "Sum of given numbers is: " << no1 + no2 << endl;
        } else if (fun == "sub") {
            cout << "Difference of given numbers is: " << no1 - no2 << endl;
        } else if (fun == "mul") {
            cout << "Multiplication of given numbers is: " << no1 * no2 << endl;
        } else if (fun == "div") {
            double b=no1 / no2;
            while (no2 == 0) {
                cout << "Division by zero is not allowed. Please enter a non-zero number: ";
                cin >> no2;
                while (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "You have entered a non-numerical number! Try again: ";
                    cin >> no2;
                }
            }
            cout << "Division of given numbers is: " << b << endl;
        } else {
            cout << "INPUT INVALID \n PLEASE TRY AGAIN " << endl;
        }

        cout << "If you want to use the calculator again, press 'y' or 'Y'. To exit, press any other key: ";
        cin >> uin;
        pos = flag.find(uin);
    }

    cout << "Thanks for using this program :)" << endl;
    return 0;
}
