class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int totalSum = 0;
        int leftSum = 0;

        // Step 1: Calculate total sum
        for (int i = 0; i < nums.size(); i++) {
            totalSum = totalSum + nums[i];
        }

        // Step 2: Check every index
        for (int i = 0; i < nums.size(); i++) {

            int rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }

            leftSum = leftSum + nums[i];
        }

        return -1;
    }
};