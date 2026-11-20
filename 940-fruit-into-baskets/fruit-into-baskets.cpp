class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> count;
        int i = 0;
        int j = 0;
        int maxi = 0;
        while(j<fruits.size()){
            count[fruits[j]]++;
           


            while(count.size() > 2){
                count[fruits[i]]--;
                if(count[fruits[i]] == 0){
                    count.erase(fruits[i]);
                }
                i++;
            }
             maxi = max(maxi,j-i+1);
            j++;
        }

        return maxi;

    }
};