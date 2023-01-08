#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the limit: ";
    cin >> n;
    int fib;
    int prev=0,temp=1;
    for(int i=1;i<n;i++)
    {
        fib = prev + temp;
        prev = temp;
        temp = fib;
    }
    cout << "Answer: "<<fib<<endl;
}