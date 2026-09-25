#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b;
    char operation;
    cout << "Enter the variables" << endl;
    cin >> a >> b >> operation;
    switch (operation)
    {
    case '+': 
        cout << "a+b = " << a + b; 
        break;
    case '-': 
        cout << "a-b = " << a - b;
        break;
    case '/':
        if (b != 0)
        {
            cout << "a/b = " << a / b;
            
        }
        else
        {
            cout << "This operation is not possible";
        }
        break;
    case '*':
    {
        cout << "a*b = " << a * b;
        break;
    }
        
    }
}

