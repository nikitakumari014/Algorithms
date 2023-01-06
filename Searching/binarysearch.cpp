#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void BinarySearch(vector<int> arr,int num,int l,int r)
{
    while(l < r)
    {
        int mid = (l + (r-l)) / 2;
        if(arr[mid]==num){
        cout<<"Number found";
        return;}
        else if(arr[mid] > num)
        r = mid - 1;
        else
        l = mid + 1;
    }
    cout<<"Number not found.\n";
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
    sort(arr.begin(),arr.end());
    BinarySearch(arr, num,0,n-1);
    return 0;
}
//time: O(logN)
//space: O(1)