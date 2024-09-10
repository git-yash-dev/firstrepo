#include <iostream>
#include <limits>
#include <string>

using namespace std;

double conversion(double temp, string scalei, string scaleo) {
    double num = 0.0; // Ensure num is a double
    if (scalei == "Celsius" && scaleo == "Fahrenheit") {
        num = temp * 9 / 5 + 32;  
    } else if (scalei == "Celsius" && scaleo == "Kelvin") {
        num = temp + 273.15;  
    } else if (scalei == "Fahrenheit" && scaleo == "Celsius") {
        num = (temp - 32) * 5 / 9;  
    } else if (scalei == "Fahrenheit" && scaleo == "Kelvin") {
        num = (temp - 32) * 5 / 9 + 273.15;  
    } else if (scalei == "Kelvin" && scaleo == "Celsius") {
        num = temp - 273.15;  
    } else if (scalei == "Kelvin" && scaleo == "Fahrenheit") {
        num = (temp - 273.15) * 9 / 5 + 32;  
    }
    return num;
    int var=10;
}

int main() {
    double temp;
    cout << "Enter temperature: ";
    cin >> temp;
    while (cin.fail()) {
        cout << "Input is invalid. Try again: ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> temp;
    }

    string scalein, scaleout;
    string mains = "Celsius Fahrenheit Kelvin";

    cout << "Enter input scale (Celsius, Fahrenheit, or Kelvin): ";
    cin >> scalein;
    while (mains.find(scalein) == string::npos) { // Correct condition for invalid input
        cout << "Invalid scale. Please enter one of the three (Celsius, Fahrenheit, or Kelvin): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> scalein;
    }

    cout << "Enter output scale (Celsius, Fahrenheit, or Kelvin): ";
    cin >> scaleout;
    while (mains.find(scaleout) == string::npos) { // Correct condition for invalid input
        cout << "Invalid scale. Please enter one of the three (Celsius, Fahrenheit, or Kelvin): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> scaleout;
    }

    if (scalein == scaleout) {
        cout << "Conversion from " << scalein << " to " << scaleout << " is: " << temp << " " << scalein << endl;
    } else { 
        cout << "Conversion from " << scalein << " to " << scaleout << " is: " << conversion(temp, scalein, scaleout) << " " << scaleout << endl;
    }

    return 0;
}
