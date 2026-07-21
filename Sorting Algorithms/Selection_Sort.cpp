#include <iostream>
using namespace std;
void SelectionSort(int arr[],int n)
    {
        for(int i =0; i<n-1;i++)
        {
            int minIndex = i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[minIndex] > arr[j])
                {
                    minIndex = j;
                }
            }
            if(minIndex!=i)
            swap(arr[minIndex],arr[i]);
        }
}
int main() {
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++)
    {
        cout<<"Enter the element at position "<<i<<" ";
        cin>>arr[i];
    }
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    SelectionSort(arr, n);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}