class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> count;
        int maxi = 0;
        int i = 0,j = 0;

        while(j < s.length()){
            count[s[j]]++;

            while(count[s[j]] > 1){
                count[s[i]]--;
                i++;
            }

            maxi = max(maxi,j-i+1);
            j++;
        }

        return maxi;
    }
};