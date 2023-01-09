#include<iostream>
#include<vector>
#define max 30
using namespace std;
void bubblesort(int arr[],int n)
{
   int flag;
   for(int i=0;i<n-1;i++)
   {
    flag = 0;
    for(int j=0;j<n-1-i;j++)
    {
        if(arr[j] > arr[j+1]) {
        swap(arr[j],arr[j+1]);
        flag = 1;
        }
    }
    if(flag == 0)
    break;
   }
}
int main()
{
    int n;
    int arr [max];
    cout <<"Enter number of elements: ";
    cin >> n;
    cout<<"Enter all the elements"<<endl;
    for(int i=0;i<n;i++)
    cin >> arr[i];
    bubblesort(arr,n);
    cout<<"Elements after applying bubble sort\n";
    for(int i=0;i<n;i++)
    cout << arr[i] << "\t";
    return 0;
}