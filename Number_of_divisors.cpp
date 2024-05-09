//Given an integer N, find the number of divisors of N that are divisible by 3.
#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
		int count_divisors(int n)
		{
		    int count = 0;
       for (int i = 1; i <= sqrt(n); ++i) {
              if (n % i == 0) {  //find divisors
                 if (i % 3 == 0)  // divisors which be divide by 3
                     count++;
                 if (i != n / i && (n / i) % 3 == 0)  //not get the same i when n divided with i and n divide with i is must divide by 3
                     count++;
        }
    }
    return count;    
		}
};
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	int ans = ob.count_divisors(n);
    	cout << ans << "\n";
    }
	return 0;
}
