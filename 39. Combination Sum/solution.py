def comb_sum(nums: List[int], target: int, comb: List[int] = [], cum_sum: int = 0) -> List[List[int]]:
    if cum_sum == target:
        return [comb]
    elif cum_sum > target:
        return []
    elif len(nums) == 0:
        return []
    first = nums[0]
    take_and_stay = comb_sum(nums, target, comb + [first], cum_sum + first)
    take_and_move_on = comb_sum(nums[1:], target, comb + [first], cum_sum + first)
    drop_and_move_on = comb_sum(nums[1:], target, comb, cum_sum)
    return list(set([tuple(t) for t in take_and_stay] +
                [tuple(t) for t in take_and_move_on] +
                [tuple(t) for t in drop_and_move_on]))

class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        return comb_sum(candidates, target)
