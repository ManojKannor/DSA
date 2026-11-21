class Solution {
public:

    int atmost(vector<int>& nums,int goal){
        int sum = 0;
        int count = 0;
        int i = 0;
        int j = 0;

        if(goal < 0) return 0;

        while(j < nums.size()){
            sum += nums[j];

            while(sum > goal){
                sum -= nums[i];
                i++;
            }

            count += (j-i+1);
            j++;
        }


        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal) - atmost(nums,goal-1);
    }
};