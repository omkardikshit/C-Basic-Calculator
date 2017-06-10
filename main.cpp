#include <iostream>

using namespace std;

int main()
{
   int a,c,d;
    char  b;
   cout << "Calculator (Write Some Numbers) \n";
   cin >> a >> b >> c;

    switch(b)
    {
        case '+':
            cout  << "the answer is " << a+c;
            cout << "\n \n";
            break;

        case '-':
            cout << "the answer is " << a-c;
            cout << "\n \n";
            break;

        case '*':
            cout << "the answer is " << a*c;
            cout << "\n \n";
            break;

        case '/':
            cout << "the answer is " << a/c;
            cout << "\n \n";
            break;

        case '%':
            cout << "the answer is " << a/c;
            cout << "\n \n";
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            cout << "\n \n";
            break;
    }

    return 0;
}
