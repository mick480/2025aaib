# week04-2.py是今天的 LeetCode 挑戰題 easy題(二合一)
# LeetCode 2523. Maximum Count of Positive Integer and Negative Integer
# 找出"有幾個正數" "有幾個負數"，大的那個數量回傳
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos = 0
        neg = 0
        for i in range(len(nums)):#迴圈裡更新他
            if nums[i]>0:pos += 1
            if nums[i]<0:neg += 1
        return max(pos, neg)
