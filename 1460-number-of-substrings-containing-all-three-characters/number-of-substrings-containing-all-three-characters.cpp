class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0;
        int count = 0;
        int hash[3] = {0};

        for(int j = 0; j < s.size(); j++) {

            // expand window
            hash[s[j] - 'a']++;

            // while window contains a,b,c
            while(hash[0] > 0 && hash[1] > 0 && hash[2] > 0) {

                // all substrings from j to end are valid
                count += (s.size() - j);

                // shrink window
                hash[s[i] - 'a']--;
                i++;
            }
        }

        return count;
    }
};