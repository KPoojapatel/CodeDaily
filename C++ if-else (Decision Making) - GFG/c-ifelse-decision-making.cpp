//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string compareFive(int n){
       string result;
    if (n > 5) {
        result = "Greater than 5";
    } else if (n < 5) {
        result = "Less than 5";
    } else {
        result = "Equal to 5";
    }
    return result;
}
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.compareFive(N) << endl;
    }
    return 0; 
} 

// } Driver Code Ends