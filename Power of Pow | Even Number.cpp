/*Given a single integer N, your task is to find the sum of the square of the first N even natural Numbers.*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
		long long int sum_of_square_evenNumbers(long long int n)
		{
		    
		    long long int sum1=0,count=0;
		    for(int i=2;count<n;i=i+2)  // increment by 2
		    {
		            
		            sum1=sum1+i*i;  //multiply with same number so that we get the square and add to the sum1
		            count=count+1;   
		    }
		    return sum1;
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
    	long long int  ans = ob.sum_of_square_evenNumbers(n);
    	cout << ans <<"\n";
    }
	return 0;
}
