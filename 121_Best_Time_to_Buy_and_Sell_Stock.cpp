class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maiorPreco = prices[prices.size()-1];
        int maiorLucro = 0;

        for (int i = prices.size() - 2; i >= 0; i--) {
            if (maiorPreco - prices[i] > maiorLucro) {
                maiorLucro = maiorPreco - prices[i];
            }

            if (prices[i] > maiorPreco) {
                maiorPreco = prices[i];
            }
        }

        return maiorLucro;
    }
};