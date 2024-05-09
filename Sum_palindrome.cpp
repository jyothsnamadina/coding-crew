/*Given a number, reverse it and add it to itself unless it becomes a palindrome or number of iterations becomes more than 5.*/
#include <bits/stdc++.h>
using namespace std;
    long long reversnum(long long n) //function to reverse the number 
    { 
        long long rev_n = 0,r=0; 
        while (n!=0) 
        { 
            r=n%10;
            rev_n = rev_n*10 + r; 
            n = n/10; 
        } 
        return rev_n; 
    } 
    bool isPalindrome(long long num)  //function to check that sum is palindrome or not
    { 
        return (reversnum(num) == num); 
    } 
class Solution {
  public:
    long long isSumPalindrome(long long n)
    {
        int count=0;
        while(!isPalindrome(n) && count<5)   //loop iterates when the number is not palindrome and count less than five
        {
            int k=reversnum(n);
            n+=k;
            count++;
        }
        if(isPalindrome(n))
        {
          return n;  //if palindrome than prints value
        }
        return -1;   //else prints -1
      
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}

