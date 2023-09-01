#include<iostream>
using namespace std;
int main(){
    int A[5]= {2,9,4,5,7};
    int n=5,max;
    max = A[0];
    for(int i=0;i<5.;i++)
    {
        if(max<A[i])
        {
            max = A[i];
        }
    }
    cout<<"Largest element is:"<<max;

    return 0;
}


