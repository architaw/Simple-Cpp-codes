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
        int begin=-1;
        
        for(int j=0; j<numberOfWords; j++)
        {
            
            cin >> s;
            
            if(s.at(0)!='#') begin=j;
            v1.push_back(s);
            
            
        }
    
       if(begin!=-1)
        {
            for(int k=begin+1; k<numberOfWords; k++)
                cout << v1[k] << " ";
                
            cout << v1[begin] << " ";
            
            for(int k=0; k<begin; k++)
                cout << v1[k] << " ";
        }
        
        if(begin==-1){
            for(int k=0; k<numberOfWords; k++)
                cout << v1[k] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
