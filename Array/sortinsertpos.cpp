class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i]>=k){
                return i;
            }
        }
        return arr.size();
    }
};