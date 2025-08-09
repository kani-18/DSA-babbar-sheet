class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        for (int i = 0; i < n - 2; i++) {
            map<int, int> mpp;
            for (int j = i + 1; j < n; j++) {
                int sum = arr[i] + arr[j]; // keep sum as is, but reset for each j
                int rem = target - sum;
                if (mpp.find(rem) != mpp.end()) {
                    return true;
                }
                mpp[arr[j]] = 1;
            }
        }
        return false;
    }
};
