// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int prod=1;
        int prev=1;
        int ans=-1e9;
        int pre=1;
        int suff=1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(pre ==0)pre=1;
            if(suff==0)suff=1;
            pre*=arr[i];
            suff*=arr[n-i-1];
            ans=max(ans,max(pre,suff));
        }
        return ans;
    }
    
};
