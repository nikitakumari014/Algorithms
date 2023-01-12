#include<iostream>
#include<vector>
using namespace std;
void count_sort(vector<int> &a,int n)
{
    int max = a[0];
    vector<int> temp(n);
    for(int i=1;i<n;i++) // finding the range
    if(a[i] > max)
    max = a[i];
     vector<int> b(max);     
    for(int i=0;i<=max;i++) // initializing the array.
    b[i] = 0;
    for(int i=0;i<n;i++)
    b[a[i]]++;
    for(int i=1;i<=max;i++)
    b[i]+= b[i-1];
    for(int i=n-1;i>=0;i--)
    {
        temp[b[a[i]]-1] = a[i];
        b[a[i]]--;
    }
    for(int i=0;i<n;i++)
    a[i] = temp[i];
}
int main()
{
    int n;
    cout <<"Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter all the elements"<<endl;
    for(int i=0;i<n;i++)
    cin >> arr[i];
    count_sort(arr,n);
    cout<<"Elements after applying bubble sort\n";
    for(int i=0;i<n;i++)
    cout << arr[i] << "\t";
    return 0;
}