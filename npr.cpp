//Write a program to calculate nPr. nPr represents n permutation r and value of nPr is (n!) / (n-r)!.
#include <bits/stdc++.h>
using namespace std;
long long fact(int N)  //factorial of N
{
    if(N==0)
    {
    return 1;
    }
    else 
    {
    long long f =1;
    for (int i=1;i<=N;i++)
       f=f*i;
    return f;
    }
}
class Solution{
public:
    long long nPr(int n, int r){
        return fact(n)/fact(n-r);    
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
