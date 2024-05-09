//find given number is armstrong or not
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n){
        int sum=0,r=0,o=0;
        o=n;
        while(n!=0)
        {
            r=n%10;    //get each digit
            sum=sum+r*r*r; //cube that digit and add to sum
            n=n/10;     //remove that digit
            
        }
        if(o==sum)
        return "Yes";
        else
        return "No";
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

