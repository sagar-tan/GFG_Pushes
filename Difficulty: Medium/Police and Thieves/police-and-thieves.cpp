//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k){
        int count = 0;
        int police = 0;
        int theif = 0;
        while(police<n && theif<n){
            while(police<n && arr[police]!='P'){
                police++;
            }
            while(theif<n && arr[theif]!='T'){
                theif++;
            }            
            if(police<n && theif<n && abs(police-theif)<=k){
                count++;
                police++;
                theif++;
            }
            else if(police< n && theif <n){
                if(police<theif){
                    police++;
                }
                else{
                    theif++;
                }
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	
cout << "~" << "\n";
}
	return 0; 
} 


// } Driver Code Ends