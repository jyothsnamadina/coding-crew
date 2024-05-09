//Given a number N, find the cube root of N.
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int cubeRoot(int N) {
        return cbrt(N);  
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;
    }
    return 0;
}
