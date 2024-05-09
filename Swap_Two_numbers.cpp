//Swap given two numbers and print them. (Try to do it without a temporary variable.) and return it.
#include<bits/stdc++.h> 
using namespace std; 
class Solution{   
public:
    pair<int, int> get(int a, int b){
        //complete the function here
        a=a+b;   //add both numbers and store in a variable
        b=a-b;   //sub b in a so that we get the starting a value that can be store in b.so a value swap as b value.
        a=a-b;   //sub b which is swapped with a value in a.So that b value swapped with a.
       return make_pair(a,b) ; 
    }
   
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        Solution ob;
        pair<int, int>p = ob.get(a, b);
        cout << p.first << ' ' << p.second << endl;
    
    }
    return 0; 
} 

