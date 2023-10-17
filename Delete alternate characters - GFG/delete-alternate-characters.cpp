//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
        // for(int i=1;i<S.length();i+=2){
        //      S.erase(i,1); // erase alternate (elements / character )
        // }
        // return S;
        
        
        
        //  for (int i = 1; i < S.length(); i += 2) {
        //     S.erase(i, 1); // Erase every alternate character
        // }
        // return S;
        
        string result;

         for (int i = 0; i < S.length(); i += 2) {
            result += S[i];
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.delAlternate(S) << endl;
    }
    return 0;
}

// } Driver Code Ends