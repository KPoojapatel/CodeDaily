//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {string result = "";
        while (n > 0) {
            int remainder = (n - 1) % 26;  // Adjust for 1-based indexing and get remainder
            result = char('A' + remainder) + result;  // Convert remainder to character and prepend to result
            n = (n - 1) / 26;  // Adjust for 1-based indexing and divide by 26
        }
        return result;
    }
};






//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends