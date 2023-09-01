#include<iostream>
using namespace std;
int main(){
    int A[5], n=5, key;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    cout<<"Enter the element you want to search for: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key == A[i])
        {
            cout<<"Found at index: "<<i;
            return 0;
        }
    }
    cout<<"Not found";

    return 0;
}

