//Find out prime numbers less than a given number
#include <iostream>
using  namespace std;

bool isPrime(int num)
{
    if(num==1) return false;
    for(int i=2; i<=(num+1)/2; i++)
    {
        if(num%i==0) return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "Input the number till where you want the primes.\n";
    cin >> n;

    for(int num=2; num<=n; num++)
    {
        if(isPrime(num))
        {
            cout << num << " ";
        }
    }
}
