//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string S) {
        int n=S.size();
        for (int i=0;i<n;i++){
            // Check if the character is an uppercase letter
            if (isupper(S[i])) {
                // Convert the uppercase letter to lowercase
                S[i] = tolower(S[i]);
            }
        }
        return S;
    }
};







//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends