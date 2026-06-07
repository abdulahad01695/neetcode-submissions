class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int min_price = INT_MAX; // Tracks the cheapest day to buy so far
         int max_profit = 0;      // Tracks the best profit possible

    for (int current_price : prices) {
        // Update the lowest price seen so far
        if (current_price < min_price) {
            min_price = current_price;
        } 
        // Calculate profit if sold today, and update max_profit if it's better
        else if (current_price - min_price > max_profit) {
            max_profit = current_price - min_price;
        }
    }
     return max_profit;   

    }
};
