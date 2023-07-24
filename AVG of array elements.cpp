#include <iostream>
using namespace std;
int main()
{
 int n, i;
 float sum=0.0, average;

 cout << "Enter the numbers of elements: ";
 cin >> n;
 int A[n];
 cout<<("Enter the elements of the array : ");
 for(auto &x:A)
 {
// cout << i + 1 << ". Enter number: ";
 cin >>x;
 sum +=x;
 }

 average = sum / n;
 cout << "Average = " << average;

 return 0;
}
