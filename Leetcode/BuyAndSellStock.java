package Leetcode;

// Bruteforce Approach - TLE on Leetcode.
class SolutionA1 {
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        int i,j;
        for(i=0;i<prices.length;i++){
            for(j=i+1;j<prices.length;j++){
                int sellPrice = prices[j]-prices[i];
                if(maxProfit<sellPrice){
                    maxProfit=sellPrice;
                }
            }
        }
        return maxProfit;
    }
}

// Better Approach - Greedy
class SolutionA2 {
    public int maxProfit(int[] prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        int profit;
        for(int i=1; i<prices.length; i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            profit = prices[i]-minPrice;
            if(maxProfit<profit){
                maxProfit=profit;
            }
        }
        return maxProfit;
    }
}