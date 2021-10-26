#include<iostream>
using namespace std;
bool prime(int x)
{
    if (x<2) return false ;
    int i=2 ;
    while(i*i<=x && x%i!=0 )
     ++i ;
        return i*i > x ;
}
int main()
{
    int n , a ;
    cin >> n ;
    a= n/2 ;
    while(!prime(a) || !prime(n-a))
        --a ;
    cout << a << ' ' << n-a ;
}


