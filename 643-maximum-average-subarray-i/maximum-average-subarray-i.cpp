class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currsum = 0;
        double maxavg = 0;
        double avg = 0;


        for(int i=0;i<k;i++){
            currsum += nums[i];
        }

        avg = currsum / k;
        maxavg = avg;
        for(int i=k;i<nums.size();i++){
            currsum -= nums[i-k];
            currsum += nums[i];
            avg = currsum / k;
            maxavg = max(avg,maxavg);
        }

        return maxavg;
    }
};