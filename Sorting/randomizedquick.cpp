#include<iostream>
#include<vector>
#include<random>
#include<time.h>
using namespace std;
int partition(vector<int> &arr,int l, int r)
{
    int pivot = arr[r];
    int i = l-1;
    for(int j=l;j<=r-1;j++)
    {
        if(arr[j]<pivot)
        {
            ++i;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
int randomized(vector<int> &arr,int l,int r)
{
  srand(time(0));
  int random = l + rand() % (r-l);
  swap(arr[r],arr[random]);
  return partition(arr,l,r);
}
void QuickSort(vector<int> &arr,int l,int r)
{
    if(l<r)
    {
        int p = randomized(arr,l,r);
        QuickSort(arr,l,p-1);
        QuickSort(arr,p+1,r);
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
    QuickSort(arr,0,n-1);
    cout<<"Elements after applying Quick sort\n";
    for(int i=0;i<n;i++)
    cout << arr[i] << "\t";
    return 0;
}