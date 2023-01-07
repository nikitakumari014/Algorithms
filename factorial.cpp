#include<iostream>
using namespace std;
int main()
{
    int fact=1,i=2;
    int num;
    cout << "Enter the number: ";
    cin >> num;
    while(i<=num)
    {
        fact *= i;
        i++;
    }
    cout<< "Factorial of the number is: "<<fact;
    return 0;
}