/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
	// Max profit is just pairwise counting.
	let profit = 0;

	if (prices.length === 0 || prices.length === 1) return profit;

	for (let i = 0; i < prices.length - 1; i++) {
		if (prices[i] < prices[i + 1]) {
			profit += prices[i + 1] - prices[i];
			console.log('profit now', profit);
		}
	}

	return profit;
};
