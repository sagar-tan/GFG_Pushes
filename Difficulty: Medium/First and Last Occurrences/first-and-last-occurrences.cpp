//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int n = arr.size();
        int left = -1,right = -1;
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==x){
                left = mid;
                high = mid-1;
            }
            else if(arr[mid]<x){
                low = mid+1;
            }
            else{//arr[mid]>tg
                high = mid-1;
            }
        }
        low = 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==x){
                right = mid;
                low = mid+1;
            }
            else if(arr[mid]<x){
                low = mid+1;
            }
            else{//arr[mid]>tg
                high = mid-1;
            }
        }
        return {left, right};
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends