//Given a stream of incoming numbers, find average or mean of the stream at every point.
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    vector<float> a;
	    for(int i=0;i<n;i++) //iterates n times
	    {
	        float sum1=0,count=0;
	        for(int j=0;j<=i;j++) //iterates i times
	        {
	            sum1=sum1+arr[j]; //add array value based on i to the sum
	            count=count+1;   // increment count by number of values added
	        }
	        a.push_back(sum1/count); // the value sum by average is add to the a
	    }
	    return a;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.streamAvg(arr, n);
        cout << fixed<< setprecision(2);
        for (auto x : ans) {
            cout <<x<<" ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
