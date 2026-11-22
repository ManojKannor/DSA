class Solution {
public:
    int atmost(vector<int>& nums,int k){
        int i = 0;
        int j = 0;
        int sum = 0;
        int count = 0;

        while(j < nums.size()){
            
            if(nums[j] % 2 != 0){
                sum++;
            }

            while(sum > k){
                if(nums[i] % 2 != 0){
                    sum--;
                }
                i++;
            }

            count += (j-i+1);
            j++;
            
        }

        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k) - atmost(nums,k-1);
    }
};