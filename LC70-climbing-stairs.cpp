class Solution {
public:
    int climbStairs(int n) {
        int prev = 1; //0
        int current = 1; //1
        while (n>1){
            int temp = current;
            current += prev;
            prev = temp;
            --n;
        }
        return current;
    }
};
