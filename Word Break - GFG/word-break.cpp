//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
    public:
    int v[1101][1101];
    int maxi;
public:
    int wordBreak(string A, vector<string> &B) {
        unordered_map<string,bool> m;
        memset(v,-1,sizeof(v));
        maxi=0;
        for(int i=0;i<B.size();i++)
        {
            if(maxi<B[i].length())
            {
                maxi=B[i].length();
            }
            m[B[i]]=true;
        }
        return(dp(m,A,0,"",0));
    }
    int dp(unordered_map<string,bool> m, string a, int i,string sub,int n)
    {
        if(v[i][n]!=-1)
        {
            return v[i][n];
        }
        if(n>maxi)
        {
            return 0;
        }
        if(i==a.size())
        {
            if(m[sub]==true)
            {
                return v[i][n]=1;
            }
            else
            {
                return v[i][n]=0;
            }
        }
        sub=sub+a.at(i);
        if(m[sub]==true)
        {
           int r1= dp(m,a,i+1,"",0);
            int r2=dp(m,a,i+1,sub,sub.length());
            return v[i][n]=r1+r2;
        }
        else
        {
            return v[i][n]=(dp(m,a,i+1,sub,sub.length()));
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends