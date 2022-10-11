class Solution {
    public int maxProfit(int[] prices) {
        if (prices.length < 2) return 0;
        int maxProfit = 0;
        int lowestPriceSeen = prices[0];
        for (int i=1; i<prices.length; i++){
            int currentProfit = prices[i] - lowestPriceSeen;
            if (currentProfit > maxProfit) maxProfit = currentProfit;
            if (prices[i] < lowestPriceSeen) lowestPriceSeen = prices[i];
        }
        return maxProfit;
    }
}