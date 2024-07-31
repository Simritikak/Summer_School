class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int sum = 0;
        for (int i=1;i<prices.size();i++) {
            if (sum < (prices[i]-min)){
            sum = prices[i] - min;
            }
            if (prices[i]  < min) {
            min = prices[i];
        }
        }
       
    return sum;
    }
};
