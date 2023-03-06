class Solution {
public:
    int climbStairs(int n) {
        int possibilidades[100] = {0, 1, 1};
        int i = 1;

        while (n--) {
            i++;
            possibilidades[i] = possibilidades[i-1] + possibilidades[i-2];
        }

        return possibilidades[i];
    }
};