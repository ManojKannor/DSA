class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long currsum = 0;
        long maxsum = 0;
        unordered_map<int, int> freq;
        int n = nums.size();

        for(int i=0;i<k;i++){
            currsum += nums[i];
            freq[nums[i]]++;
        }

        if(freq.size() == k){
            maxsum = currsum;
        }


        for(int i=k;i<n;i++){
            currsum += nums[i];
            freq[nums[i]]++;
            
            long outElement = nums[i-k];
            freq[outElement]--;
            currsum -= outElement;

            if(freq[outElement] == 0){
                freq.erase(outElement);
            }

            if(freq.size() == k){
                maxsum = max(maxsum,currsum);
            }

        }

        return maxsum;
    }
};