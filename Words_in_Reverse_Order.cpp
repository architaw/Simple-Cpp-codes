#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int numberOfCases;
    cin >> numberOfCases;
    

    
    for(int i=0; i<numberOfCases; i++)
    
    {
        int numberOfWords;
        cin >> numberOfWords;
        
        string s;
        vector<string> v1;
        
        // ---------- Storing Elements in a Vector ----------------
        
        for(int j=0; j<numberOfWords; j++)
        {
            
            cin >> s;
            v1.push_back(s);
            
        }
        
        // ------------ Reverse in a vector ---------------------
        
    reverse(v1.begin(), v1.begin()+v1.size());
       
        // -------------- Printing a Vector ---------------------
        
    for (int i = 0; i <v1.size(); i++) 
    cout << v1[i] << " ";
    cout << endl;    
    }
    
    return 0;
}
