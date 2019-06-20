#include <bits/stdc++.h>

using namespace std;
int main()
{
    int array[] = { 83, 5, 106, 71, 45};
    int n = sizeof(array)/sizeof(array[0]);
   
    sort(array, array+n);
    cout << "This is a sorted Array: "<< endl;
    for (int i = 0; i < n; ++i) 
        cout << array[i] << " ";
    return 0;
}
