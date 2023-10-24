//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
         {  
            int lc = 0,uc = 0,sc = 0,n = 0;
            int l = s.length();
            for(int i = 0; i<l; i++){
                if(islower(s[i]))lc++;
                else if(isupper(s[i]))uc++;
                else if(isdigit(s[i]))n++;
                else sc++;
            }
            return {uc,lc,n,sc};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends