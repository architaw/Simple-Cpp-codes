//Find out if a number is Prime or not
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if(num==1) return false;

    for(int i=2 ; i<=(num+1)/2; i++)
    {
        if(num%i==0) return false;
    }
    return true;
}
int main()
{
    cout << isPrime(1000003);
    return 0;
}
