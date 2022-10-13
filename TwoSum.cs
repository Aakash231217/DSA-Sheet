/* Problem link: https://leetcode.com/problems/two-sum/

Brief explanation: for each value in nums, we need to check if the result of the target value minus the current value exists in nums. In case it exists, we simply return the index of the needed value and the current index, otherwise we add the current value into the dictionary, with the key being the current value itself and the value being the index of the current value.
*/

public int[] TwoSum(int[] nums, int target) {
    int len = nums.Count();

    var dict = new Dictionary<int, int>();

    for (int i = 0; i < len; i++)
    {
        int neededValue = target - nums[i];
        if (dict.ContainsKey(neededValue)) return new int[] { dict[neededValue], i };
        else dict.Add(nums[i], i);
    }
    
    return new int[]{};
}
