#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int> &arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
       int min = i;
       for(int j=i+1;j<n;j++)
       {
        if(arr[min] > arr[j])
        min = j;
       }
       swap(arr[i],arr[min]);
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter all the elements\n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    selectionsort(arr,n);
    cout<<"Elements after applying selection sort\n";
    for(int i=0;i<n;i++)
    cout << arr[i] << "\t";
    return 0;

}