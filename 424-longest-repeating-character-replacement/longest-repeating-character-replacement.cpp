class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int hash[26] = {0};
        int max_len = 0;
        int max_freq = 0;
        while(j < s.size()){
            hash[s[j] - 'A']++;
           

            max_freq = max(max_freq,hash[s[j] - 'A']);
            int change = j-i+1 - max_freq;
            if(change <= k){
                max_len = max(max_len , j-i+1);
            }
            if(change > k){
                hash[s[i] - 'A']--;
                i++;

            }

        j++;
        }
        return max_len;
    }
};