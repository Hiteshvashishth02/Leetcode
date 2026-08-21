class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int balance=100;
        balance-= (((purchaseAmount+5)/10)*10);
        return balance;
    }
};