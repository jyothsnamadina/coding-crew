// program to print greatest of three numbers
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int greatestOfThree(int A, int B, int C) {
        // code here
        if(A>B&&A>C)   /*using logical AND operator compares both conditions. if A greater than B and A greater than C then A returns*/  
        {
            return A;
        }
        else if(B>A&&B>C)  //if B greater than A and B greater than C then B returns.
        {
          return B;
        }
        else
        {
            return C;
        }
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.greatestOfThree(A, B, C) << "\n";
    }
}
