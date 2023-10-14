//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    int n = s.length();
    bool isWordStart = true;

    for (int i = 0; i < n; i++) {
        if (isWordStart && isalpha(s[i])) {
            s[i] = toupper(s[i]);
            isWordStart = false;
        } else if (isspace(s[i])) {
            isWordStart = true;
        }
    }

    return s;
}