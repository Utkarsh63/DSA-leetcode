class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r=0;
        int max_len = 0;
        int hash[256];
        for(int i = 0; i < 256; i++) {
            hash[i] = -1;
        }
        while(r < s.size()){
            if(hash[(unsigned char)s[r]] != -1) {
                if(hash[(unsigned char)s[r]] >= l){
                    l = hash[(unsigned char)s[r]] + 1;
                }
            }
            int len = r-l+1;
            max_len = max(len,max_len);

            hash[(unsigned char)s[r]] = r;
            r++;
        }
        return max_len;
    }
};