/*You are given an integer N, reverse the digits of given number N, ensuring that the reversed number has no leading zeroes. Return the resulting reversed number.*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
		long long int reverse_digit(long long int n)
   {
		    long long int re=0,r=0;
		    while(n!=0)
		    {
		        r=n%10;  //get the each digits by n mod 10
		        re=re*10+r;  //by multiplying with 10 to re that will increase the place value
		        n=n/10;  //remove the add digit from the n
		    }
		    return re;
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}


