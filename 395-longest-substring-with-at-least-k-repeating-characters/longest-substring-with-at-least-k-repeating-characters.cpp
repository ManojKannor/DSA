class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.length();
        if(k == 1) return s.length();
        if( n < k || n == 0) return 0;

        unordered_map<char,int> hmap;

        for(int i=0;i<n;i++){
            hmap[s[i]]++;
        }

        int l = 0;
        while(l < n && hmap[s[l]] >= k){
                l++;
        }

        if(l == n) return l;

        int ls1 = longestSubstring(s.substr(0,l),k);
        int ls2 = longestSubstring(s.substr(l+1), k);

        return max(ls1,ls2);
    }
};