//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void scores(long long a[], long long b[], int &ca, int &cb){
     ca = 0; // Initialize A's score to 0
    cb = 0; // Initialize B's score to 0

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            ca++; // A's score increases by 1
        } else if (a[i] < b[i]) {
            cb++; // B's score increases by 1
        }
    }
}
};




//{ Driver Code Starts.
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long int a[5], b[5], i=0;
        int ca=0, cb=0;
        for(i=0; i<3; i++)
            cin>>a[i];
    
        for(i=0; i<3; i++)
            cin>>b[i];
        Solution ob;
        ob.scores(a, b, ca, cb);
        
        cout<<ca<<" "<<cb<<endl;
    }
    return 0 ;
}
// } Driver Code Ends