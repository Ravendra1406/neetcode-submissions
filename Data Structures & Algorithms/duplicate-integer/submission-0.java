class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> list=new HashSet<>();
        for(int i=0;i<nums.length;i++)
        {
            if(list.add(nums[i])==false)
            return true;
        }
        return false;
    }
}