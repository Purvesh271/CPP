#include<iostream>
using namespace std;
int main(){
    int A[5], min;
    cout<<"Enter 5 numbers: ";
    for(int i=0;i<5;i++)
    {
        cin>>A[i];
    }
    min = INT_MAX;
    for (auto x:A)
    {
        if(x<min)
        {
            min = x;
        }
    }

    cout<<"The minimum number in array is: "<<min;

    return 0;
}

