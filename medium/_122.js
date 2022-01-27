const maxProfit = (prices) => {
  let profit = 0; // profit counter

  for (let i = 0; i < prices.length - 1; i++) {
    // check if prices[i+1] element is greater than the current index element
    if (prices[i + 1] - prices[i] > 0) {
      // add the difference to the profit
      profit += prices[i + 1] - prices[i];
    }
  }

  return profit;
};

// Test
const prices = [7, 1, 5, 3, 6, 4];

console.log(maxProfit(prices));

/*
You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. 
However, you can buy it then immediately sell it on the same day.

Find and return the maximum profit you can achieve.
*/
