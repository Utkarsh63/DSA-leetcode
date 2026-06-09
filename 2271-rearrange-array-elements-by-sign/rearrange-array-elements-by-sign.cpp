class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posval;
        vector<int> negval;
        vector<int> result;
        for(int num : nums){
            if(num>0) posval.push_back(num);

            else negval.push_back(num);
        }
        for(int i=0; i<posval.size(); i++){
            result.push_back(posval[i]);
            result.push_back(negval[i]);
        }
        
        return result;
    }
};