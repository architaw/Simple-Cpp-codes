// Finding First n prime numbers
#include <iostream>
using namespace std;

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
    int n; // No. of primes
    int primeCount = 0; // Prime Flag
    int num = 1; //No. being tested

    cout << "Enter the number of prime numbers you want.\n";
    cin >> n;

    for(; primeCount<n; num++) //counts the number of prime.
    {
        if(isPrime(num))
        {
            cout << num << "\n";
            primeCount++;
        }
    }
    return 0;
}
