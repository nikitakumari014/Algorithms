#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int l,int mid,int r)
{
    int n1  = mid-l+1;
    int n2 = r-mid;
    vector<int>left(n1),right(n2);
    for(int i=0;i<n1;i++)
    left[i] = arr[l+i];
    for(int i=0;i<n2;i++)
    right[i] = arr[mid+1+i];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i] > right[j])
        arr[k++] = right[j++];
        else
        arr[k++] = left[i++];
    }
    while(i<n1)
    arr[k++] = left[i++];
    while(j<n2)
    arr[k++] = right[j++];
}
void Mergesort(vector<int> &arr,int l,int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        Mergesort(arr,l,mid);
        Mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
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
    Mergesort(arr,0,n-1);
    cout<<"Elements after applying bubble sort\n";
    for(int i=0;i<n;i++)
    cout << arr[i] << "\t";
    return 0;
}