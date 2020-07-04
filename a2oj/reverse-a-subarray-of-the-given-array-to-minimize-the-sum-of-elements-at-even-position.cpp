/*
Given an array arr[] of positive integers.
The task is to reverse a subarray to minimize the
sum of elements at odd indices and print the minimum sum.
*/

/*
Size of sub array, to be reversed, should be even,
Even element would move to odd for change,
Difference of adjacent elements is the key,
Get all possible adjacent elements and
find the largest possible sub array you can replace
this is done in after_rev
Add the difference to original sum
*/

#include <bits/stdc++.h>
using namespace std;

int after_rev(vector<int> v){
    int minimum =0, count = 0;

    for(int i=0; i<v.size(); i++){
        count = count + v[i];
        if(count > 0)
            count = 0;
        if(count < minimum)
            minimum = count;
    }

    return minimum;
}

void solution(vector<int> arr){
    int sum = 0;
    for(int i=1; i < arr.size(); i+=2){
        sum = sum + arr[i];
    }

    vector<int> v1, v2;

    for(int i=1; i+1 <  arr.size(); i+=2){
        v1.push_back(arr[i+1] - arr[i]);
    }

    for(int i=0; i+1 <= arr.size(); i+=2){
        v2.push_back(arr[i]-arr[i+1]);
    }

    int change = min(after_rev(v1), after_rev(v2));

    if (change < 0)
        sum = sum + change;

    cout << sum << endl;
}

int main()
{
    vector <int> inp = {1, 2, 3, 4, 5, 6};

    solution(inp);
// Ans : 1+3+5 = 9, instead of 2+4+6.
    return 0;
}
