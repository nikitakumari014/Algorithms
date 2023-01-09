#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int> &arr,int n)
{
   for(int i=0;i<n-1;i++)
   {
    for(int j=0;j<n-1-i;j++)
    {
        if(arr[j] > arr[j+1])
        swap(arr[j],arr[j+1]);
    }
   }
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
    bubblesort(arr,n);
    cout<<"Elements after applying bubble sort\n";
    for(int i=0;i<n;i++)
    cout << arr[i] << "\t";
    return 0;
}