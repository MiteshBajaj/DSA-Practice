/*
     Problem 2: Two Sum

     Description:
    Given an array of integers `nums` and an integer `target`, return the indices of the 
    two numbers such that they add up to `target`.

    You may assume that each input has exactly one solution, and you may not use the same element twice.
*/

import java.util.HashMap;

public class SecondProblem {

    public static int[] twoSum(int[] nums, int target) {
        // Map to store number and its index
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];

            if (map.containsKey(complement)) {
                return new int[]{map.get(complement), i};
            }

            map.put(nums[i], i);
        }

        // Problem guarantees one solution, so this won't be reached
        return new int[]{-1, -1};
    }

    public static void main(String[] args) {
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        int[] result = twoSum(nums, target);

        System.out.println("Indices: [" + result[0] + ", " + result[1] + "]");
        // Output: Indices: [0, 1]
    }
}

