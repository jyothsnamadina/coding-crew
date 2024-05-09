//Create the multiplication table of a given number N and return the table as an array.
#include<bits/stdc++.h> 
using namespace std; 
class Solution
{
public:
    vector<int> getTable(int N)
    {
        // Write Your Code here
        vector<int> r;
        for(int i=1;i<=10;i++)
        {
            r.push_back(N*i); //because of vector<int> type we use push_back function to add values to array
        }
        return r;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.getTable(N);
        for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
