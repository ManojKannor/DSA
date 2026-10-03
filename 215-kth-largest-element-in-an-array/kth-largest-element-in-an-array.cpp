class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ele= nums.size()-k;
        return nums[ele];
    }
};