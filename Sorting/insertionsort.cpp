#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int> &arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        swap(arr[j+1],temp);
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
    insertionsort(arr,n);
    cout<<"Elements after applying selection sort\n";
    for(int i=0;i<n;i++)
    cout << arr[i] << "\t";
    return 0;

}