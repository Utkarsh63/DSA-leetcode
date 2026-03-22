class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int zero_cnt = 0;
        int max_len = 0;
        for(int r=0; r<nums.size(); r++){
            if(nums[r] == 0) zero_cnt++;

            while(zero_cnt > k){
                if(nums[l] == 0)zero_cnt--;
                l++;
            }
            
            int len = r-l+1;
            max_len = max(len , max_len);
        }
       return max_len;

    }
};