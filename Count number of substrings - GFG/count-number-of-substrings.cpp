//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    // Helper function to count substrings with exactly k distinct characters
    long long int solve(string s, int k) {
        int n = s.size();
        long long int c = 0;          // Count of substrings
        int j = 0, sz = 0;            // Left pointer and distinct character count
        vector<int> mp(26, 0);       // Frequency of characters (a to z)

        for (int i = 0; i < n; i++) {
            int ind = s[i] - 'a';     // Calculate the index of the character

            // Check if the current character is a new distinct character
            if (mp[ind] == 0) {
                sz++;                // Increment the count of distinct characters
            }

            mp[ind]++;               // Increment the frequency of the current character

            // While there are more than k distinct characters in the window, move the left pointer
            while (j <= i && sz > k) {
                mp[s[j] - 'a']--;     // Decrement the frequency of the character at the left pointer

                // If the frequency becomes zero, decrement the distinct character count
                if (!mp[s[j] - 'a']) {
                    sz--;
                }

                j++;                 // Move the left pointer
            }

            // If there are exactly k distinct characters in the window, count the substrings
            if (j <= i) {
                c += (i - j + 1);    // Increment the count by the length of the valid substrings
            }
        }

        return c;
    }

    // Main function to count substrings with exactly k distinct characters
    long long int substrCount(string s, int k) {
        // Calculate the count of substrings with k distinct characters minus the count with (k-1) distinct characters
        return solve(s, k) - solve(s, k - 1);
    }
};


//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends