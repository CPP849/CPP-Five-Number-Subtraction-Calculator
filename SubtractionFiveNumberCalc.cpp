#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c, d, e, f;
    cout << "Welcome to the Five Number Subtraction Calculator!" << endl;
    cout << "What is the First Number?:" << endl;
    cin >> a;
    cout << "What is the Second Number?:" << endl;
    cin >> b;
    cout << "What is the Third Number?:" << endl;
    cin >> c;
    cout << "What is the Fourth Number?:" << endl;
    cin >> d;
    f = a - b - c - d - e;
    cout << "The answer is " << f << "." << endl;
    cout << "Thank you for trying out this program!" << endl;
}