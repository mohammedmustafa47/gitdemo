#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: "<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    cout<<"the elements of array are: "<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"enter element to search: "<<endl;
    int x;
    bool found =false;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==x)
        {
            found = true;
        }

    }
    if(found)
    {
        cout<<"Element  found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }

}