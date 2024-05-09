//Given a number N, find the Nth term in the series 1, 3, 6, 10, 15, 21…
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findNthTerm(int N) {
        
        int n=0;
        for(int i=0;i<N;i++)
        {
            n=n+i+1; //by given series gap between numbers increased by 2,3,4,... until Nth term 
        }
       return n;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.findNthTerm(N) << endl;
    }
    return 0;
}
