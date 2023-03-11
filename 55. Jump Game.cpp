class Solution {
public:
    bool canJump(vector<int>& nums) {
        int length = nums.size();
        int lastTrueIndex = length - 1;

        for (int i = length - 2; i >= 0; i--) {
            int maxJump = nums[i];

            if (i + maxJump >= lastTrueIndex) {
                lastTrueIndex = i;
            }
        }

        return lastTrueIndex == 0;
    }
};