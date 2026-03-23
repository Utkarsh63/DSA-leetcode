class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int max_freq = 0;
        int max_len = 0;
        int freq[26] = {0};
        for(int r=0; r<s.size(); r++){
            int index = s[r] - 'A';
            freq [index]++;

            max_freq = max(max_freq , freq[index]);

            while((r-l+1) - max_freq > k){
                freq[s[l] - 'A']--;
                l++;
            }
            max_len = max(max_len , r-l+1);
        }
    return max_len;

    }
};