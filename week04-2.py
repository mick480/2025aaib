# week04-2.py�O���Ѫ� LeetCode �D���D easy�D(�G�X�@)
# LeetCode 2523. Maximum Count of Positive Integer and Negative Integer
# ��X"���X�ӥ���" "���X�ӭt��"�A�j�����Ӽƶq�^��
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos = 0
        neg = 0
        for i in range(len(nums)):#�j��̧�s�L
            if nums[i]>0:pos += 1
            if nums[i]<0:neg += 1
        return max(pos, neg)
