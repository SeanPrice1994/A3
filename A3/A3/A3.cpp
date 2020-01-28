#include <iostream>
#include <string>

using namespace std;

int main()
{
    //integers
    int Value1;
    int Value2;
    int Value3;
    int Value4;
    int Addition;
    int Subtraction;
    int Multiplication;
    int Division;
    int Modulus;

    //Choice of options for the calculator
    cout << "1 Represents Addition" << endl;
    cout << "2 Represents Subtraction" << endl;
    cout << "3 Represents Multiplication" << endl;
    cout << "4 Represents Division" << endl;
    cout << "5 Represents Modulus" << endl;
    cout << "Choose a number" << endl;
    cin >> Value1;

    //Choose your first value
    cout << "Enter your first number" << endl;
    cin >> Value2;

    //Choose your second value
    cout << "Enter your second number" << endl;
    cin >> Value3;

    //Choosing addition
    if (Value1 == 1)
    {
        Value4 = Value2 + Value3;
        cout << Value2 << " + " << Value3 << " = " << Value4 << endl;
    }

    //Choosing subtraction
    else if (Value1 == 2)
    {
        Value4 = Value2 - Value3;
        cout << Value2 << " - " << Value3 << " = " << Value4 << endl;
    }

    //Choosing multiplication
    else if (Value1 == 3)
    {
        Value4 = Value2 * Value3;
        cout << Value2 << " * " << Value3 << " = " << Value4 << endl;
    }

    //Choosing division
    else if (Value1 == 4)
    {
        Value4 = Value2 / Value3;
        cout << Value2 << " / " << Value3 << " = " << Value4 << endl;
    }

    //Choosing modulus
    else if (Value1 == 5)
    {
        Value4 = Value2 % Value3;
        cout << Value2 << " % " << Value3 << " = " << Value4 << endl;
    }
    system("Pause");
}
