class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int start = 0;
        int end = numbers.length - 1;
        int ans[] = {0, 0};
        while(start < end){
            if(numbers[start] + numbers[end] > target)
                end--;
            else if(numbers[start] + numbers[end] < target)
                start++;
            else{
                ans[0] = start + 1;
                ans[1] = end + 1;
                return ans;
                }
            }
        return ans;
    }
}