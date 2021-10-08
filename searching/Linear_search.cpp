// Program to implement Linear Search

#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter size of array\n";
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    cout<<"Enter array elements\n";
    for(int i=0;i<sizeOfArray;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be search\n";
    int ele; 
    cin>>ele;

    bool flag=false;
    for(int i=0;i<sizeOfArray;i++)
    {
        if(arr[i]==ele){
            cout<<"Element found at position: "<<i+1<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"Element not found!!\n";
    }

    return 0;
}
