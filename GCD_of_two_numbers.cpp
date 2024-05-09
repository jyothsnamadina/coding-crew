//Given two positive integers a and b, find GCD of a and b.
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int gcd(int a, int b) {
       if(a==0)
         return b;
       else
         return gcd(b%a,a);  //by euclid algorithm if gcd(a,0) then gcd is a. 
    }
};
int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        int b;
        scanf("%d",&b);
        Solution obj;
        int res = obj.gcd(a, b);
        cout<<res<<endl;
        
    }
}

