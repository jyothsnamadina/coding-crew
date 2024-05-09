//Given the first 2 terms a1 and a2 of an Arithmetic Series.Find the nth term of the series. 
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int nthTermOfAP(int a1, int a2, int n){
        int d=0;
        d=a2-a1;  //difference of first two values
        return a1+(n-1)*d;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, n;
        cin >> a1 >> a2 >> n;
        Solution ob;
        cout << ob.nthTermOfAP(a1, a2, n) << "\n";
    }
}

