class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        for (int empty = numBottles; empty >= numExchange;
             empty = empty % numExchange + empty / numExchange)
            total += empty / numExchange;
        return total;
    }
};
