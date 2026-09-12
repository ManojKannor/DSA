class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;
        vector<int> maxl(height.size());
        vector<int> maxr(height.size());

        maxl[0] = height[0];
        maxr[n-1] = height[n-1];

        for(int i=1;i<height.size();i++){
            maxl[i] = max(maxl[i-1],height[i]);
        }

        for(int i=height.size()-2;i>=0;i--){
            maxr[i] = max(maxr[i+1],height[i]);
        }

        vector<int> water(n);

        for(int i=0;i<n;i++){
            water[i] = min(maxl[i],maxr[i]) - height[i];
        }
        int sum = 0;
        for(int i=0;i<water.size();i++){
            sum += water[i];
        }

        return sum;
    }
};