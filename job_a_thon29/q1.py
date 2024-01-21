class Solution:
    def MaxMoney(self,M,B,A):
        # code here
        max_profit = M
        
        # Start with the assumption of not buying any coins
        # Iterate through each type of coin
        for i in range(len(B)):
            # Check if it's possible to buy at least one coin of the current type in Bangalore
            if B[i] <= M:
                # Calculate the maximum number of coins that can be bought
                num_coins = M // B[i]
                
                # Calculate the profit by selling the bought coins in Ahmedabad
                profit = num_coins * A[i]
                
                # Add the remaining money after buying the coins
                profit += M % B[i]
                
                # Update max_profit if the current combination yields more profit
                max_profit = max(max_profit, profit)
        return max_profit
