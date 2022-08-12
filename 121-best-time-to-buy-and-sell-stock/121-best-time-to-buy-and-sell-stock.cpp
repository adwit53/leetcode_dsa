class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int answer = 0;
        int min_price = prices[0];
        
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < min_price)
            {
                min_price = prices[i];
            }
			
            int profit = prices[i] - min_price;
			
            if(answer < profit)
            {
                answer = profit;
            }
        }

        return answer;
    }
};