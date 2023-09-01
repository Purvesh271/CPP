#include<iostream>
using namespace std;
int main(){
    int sum=0, n =5 , A[5] = {4,8,6,9,5,};
    for(int i=0;i<5;i++)
    {
        sum = sum+A[i];
    }
    cout<<"Sum is: "<<sum;

    return 0;
}

