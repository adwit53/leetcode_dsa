//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int arr[k]={0};
        int c1=0;
        int c2=0;
        bool flag1=false;
        bool flag2=false;
        int i=0;
        for(i=0;i<k;i++)
        {
            if(arr1[c1]<arr2[c2])
            {
                arr[i]=arr1[c1];
                if(c1<n-1)
                {
                    c1++;
                }
                else
                {
                    flag2=true;
                    i++;
                    break;
                }
                
            }
            else
            {
                arr[i]=arr2[c2];
                if(c2<m-1)
                {
                    c2++;
                }
                else
                {
                    flag1=true;
                    i++;
                    break;
                }
            }
        }
        if(flag1)
        {
            for( ;i<k;i++)
            {
                arr[i]=arr1[c1];
                c1++;
            }
        }
        if(flag2)
        {
            for( ;i<k;i++)
            {
                arr[i]=arr2[c2];
                c2++;
            }
            
        }
        return arr[k-1];
        
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends