//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long nPr(int n, int r) {
    long long result = 1;
    long long nfact = 1;
    long long nrfact = 1;
    long long nr = n - r;

    // Calculate n!
    for (int i = n; i > 0; i--) {
        nfact *= i;
    }

    // Calculate (n-r)!
    for (int i = nr; i > 0; i--) {
        nrfact *= i;
    }

    // Avoid division by zero and calculate n! / (n-r)!
    if (nrfact != 0) {
        result = nfact / nrfact;
    }

    return result;
}
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends