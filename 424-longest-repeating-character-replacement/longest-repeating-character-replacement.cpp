class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int> count;
        int maxc = 0;
        int maxi = 0;

        int j = 0;int i = 0;

        while(j < s.length()){
            char ch = s[j];
            count[ch - 'A']++;

            maxc = max(maxc,count[ch - 'A']);

            int ops = (j-i+1) - maxc;

            if(ops > k){
                count[s[i] - 'A']--;
                if(ch == s[i]){
                    maxc--;
                }
                 i++;
            }else{
                    maxi = max(maxi,j-i+1);
                }
            j++;
        }

        return maxi;
    }
};