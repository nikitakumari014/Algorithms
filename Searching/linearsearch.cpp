#include <iostream>
#include <vector>
using namespace std;
void linearSearch(vector<int>arr,int num)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (num == arr[i])
        {
            cout << "Number found at position:  "
                 << i + 1;
            return;
        }
    }
    cout << "Number not found.\n";
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int num;
    cout << "Enter the element you want:\n";
    cin >> num;
    linearSearch(arr, num);
    return 0;
}
//time: O(N)
//space: O(1)