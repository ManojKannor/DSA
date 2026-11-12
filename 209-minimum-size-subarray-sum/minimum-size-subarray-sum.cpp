class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int minmal = INT_MAX;
        int i = 0; int j = 0;
        int n = nums.size();

        while(j < n){
            sum += nums[j];

            while(sum >= target){
                minmal = min(minmal , j - i + 1);
                sum -= nums[i];
                i++;
            }

            j++;
        }

        if(minmal == INT_MAX){
            return 0;
        }

        return minmal;
    }
};