// week 1(1)simple calculator
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;
    
    if(op == '+') {
        cout << "Result: " << num1 + num2 << endl;
    }
    else if(op == '-') {
        cout << "Result: " << num1 - num2 << endl;
    }
    else if(op == '*') {
        cout << "Result: " << num1 * num2 << endl;
    }
    else if(op == '/') {
        if(num2 != 0)
            cout << "Result: " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }
    else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}

// (2) GRADE CALCULATOR
#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    float total, average;
    char grade;


    cout << "Enter marks of 5 subjects :\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "\nTotal Marks: " << total << "/500" << endl;
    cout << "Average: " << average << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}




//(3)number properties
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "The number is Positive." << endl;
    else if (num < 0)
        cout << "The number is Negative." << endl;
    else
        cout << "The number is Zero." << endl;

    if (num % 2 == 0)
        cout << "The number is Even." << endl;
    else
        cout << "The number is Odd." << endl;


    if ((num >= -9 && num <= 9))
        cout << "It is a Single-digit number." << endl;
    else if ((num >= -99 && num <= 99))
        cout << "It is a Double-digit number." << endl;
    else
        cout << "It is a number with more than two digits." << endl;

    return 0;
}



//(4)simple interest calculatir 
#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;


    cout << "Enter Principal amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest (% per annum): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    
    interest = (principal * rate * time) / 100;


    cout << "Simple Interest = " << interest << endl;

    return 0;
}


//(5)temperature converter
#include <iostream>
using namespace std;

int main() {
    int choice;
    float temp, result;

    cout << "Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Celsius to Kelvin\n";
    cout << "3. Fahrenheit to Celsius\n";
    cout << "4. Fahrenheit to Kelvin\n";
    cout << "5. Kelvin to Celsius\n";
    cout << "6. Kelvin to Fahrenheit\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    cout << "Enter the temperature value: ";
    cin >> temp;

    if (choice == 1) {
        result = (temp * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << result << " °F" << endl;
    }
    else if (choice == 2) {
        result = temp + 273.15;
        cout << "Temperature in Kelvin: " << result << " K" << endl;
    }
    else if (choice == 3) {
        result = (temp - 32) * 5/9;
        cout << "Temperature in Celsius: " << result << " °C" << endl;
    }
    else if (choice == 4) {
        result = (temp - 32) * 5/9 + 273.15;
        cout << "Temperature in Kelvin: " << result << " K" << endl;
    }
    else if (choice == 5) {
        result = temp - 273.15;
        cout << "Temperature in Celsius: " << result << " °C" << endl;
    }
    else if (choice == 6) {
        result = (temp - 273.15) * 9/5 + 32;
        cout << "Temperature in Fahrenheit: " << result << " °F" << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

