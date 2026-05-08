class Solution {
public:
int atMost(vector<int>& nums, int k){
    int i=0;
    int sum = 0;
    int count =0;
    if(k < 0 ){
        return 0;
    }

    for(int j=0; j<nums.size(); j++){
        sum += nums[j] % 2;

        while(sum > k){
            sum = sum - nums[i] % 2;
            i++;
        }

        count += (j-i+1);
    }
    return count;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums, k-1);
    }
};