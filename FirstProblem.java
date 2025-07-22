package Array;
/*
    Problem: Maximum Subarray Sum (Kadane's Algorithm)
    
    Description:
    Given an integer array `nums`, find the contiguous subarray (containing at least one number) 
    which has the largest sum and return its sum.

*/

public class FirstProblem {
    
    public static int maxSubArray(int[] nums) {
        // Start with the first element
        int currentSum = nums[0];
        int maxSum = nums[0];

        // Traverse the rest of the array
        for (int i = 1; i < nums.length; i++) {
            // Either start a new subarray at nums[i] or extend the current one
            currentSum = Math.max(nums[i], currentSum + nums[i]);
            // Update maxSum if we've found a new best
            maxSum = Math.max(maxSum, currentSum);
        }

        return maxSum;
    }

    // Example usage
    public static void main(String[] args) {
        int[] nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        int result = maxSubArray(nums);
        System.out.println("Maximum Subarray Sum: " + result); // Output: 6
    }
}

