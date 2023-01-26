#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<< "Enter two numbers: ";
    cin>>m>>n;
    while(m!=n)
    {
        if (m>n)
        {
            m=m-n;
        }
        else (n>m)
        {
            n=n-m;
        }
    }
    cout<<m;


    return 0;

}
/*
#include<iostream>
using namespace std;
int main()
{
    int n,m,gcd;
    cout<<("Enter two numbers : ");
    cin>>n>>m;
    if(n<m)
    {
        for(int i=1; i<=n/2; i++)
        {
            if(n%i==0 && m%i==0)
                gcd=i;
        }
        cout<<("The GCD of ")<<n<<(" and ")<<m<<(" is : ")<<gcd;
    }
    else if(m<n || m==n)
    {
        for(int i=1; i<=m/2; i++)
        {
            if(n%i==0 && m%i==0)
                gcd=i;
        }
        cout<<("The GCD of ")<<n<<(" and ")<<m<<(" is : ")<<gcd;
    }
    return 0;
}
*\
