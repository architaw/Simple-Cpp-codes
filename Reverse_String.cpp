#include <iostream>
//#include <string>
//#include <cstdio>
//#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<=t; i++)
    {
        string rev;
        getline(cin, rev);
        reverse(rev.begin(), rev.end());
        cout << rev << endl;
    }
}
