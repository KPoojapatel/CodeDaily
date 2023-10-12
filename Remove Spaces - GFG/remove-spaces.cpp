//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string modify (string s)
    {
        int n=s.size();
        string result;
    
    // for (char c : s) {
    //     if (c != ' ') {
    //         result.push_back(c);
    //     }
    // }
    for (int i=0;i<n;i++){
        if (s[i] != ' ') {
            result.push_back(s[i]);
        }
        
    }
    
    return result;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends