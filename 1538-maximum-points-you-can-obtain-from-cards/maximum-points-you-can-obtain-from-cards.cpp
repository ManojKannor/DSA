class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int left = 0;
        int right = n - 1;
        int sum = 0;
        int maxSum = 0;

        for(int i=0;i<k;i++){
            sum += cardPoints[i];
        }

        maxSum = sum;

        for(int i = k-1; i>=0;i--){
            sum -= cardPoints[i];
            sum += cardPoints[right];
            maxSum = max(maxSum,sum);
            right--;

        }

        return maxSum;

    }
};