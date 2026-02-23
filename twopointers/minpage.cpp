class Solution {
  public:
    
    bool canAllocate(vector<int>& v, int k, int limit) {
        int student = 1;
        int pageCnt = 0;

        for (int i = 0; i < v.size(); i++) {
            if (pageCnt + v[i] <= limit) {
                pageCnt += v[i];
            } else {
                student++;
                pageCnt = v[i];
                if (student > k) return false;
            }
        }
        return true;
    }

    int findPages(vector<int> &arr, int k) {
        int sz = arr.size();
        if (k > sz) return -1;

        int l = *max_element(arr.begin(), arr.end());
        int r = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;

        while (l <= r) {
            int m = l + ((r - l) >> 1);

            if (canAllocate(arr, k, m)) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return ans;
    }
};