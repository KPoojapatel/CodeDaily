//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{// convert the integer into string
		   string str = to_string(n);
		   //calculate the length of string
		   int len =str.length();
		   // if it is a palindrome
		   for(int i=0;i<len/2;i++){
		       if(str[i]!=str[len-i-1]){
		           return "No";
		       }
		   }
		   return "Yes";
		   
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends