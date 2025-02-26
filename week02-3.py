# week02-3.py �gLeetCode
# LeetCode 1. Two Sun
# ���@��Ʀr nums �̭�"����� "�ۥ[�A�O target
# nums[i] + nums[j] == target ��� i �M j �ϱo�[�_�ӬO target

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {} # ���@�ӽc�l�A�̭���"�X�{�L���Ʀr"
        # �ڭ̷Q�n��X target �o�ӥ[�`

        for i, num in enumerate(nums):
            other = target - num # �t�~�@�ӻݭn����"�i�H��X taget"��(target-num)
            if other in box: # �b�c�l���A���t�~�@�ӻݭn����
                return [box[other], i ] # ��쵪��
            else: # �p�G�S���X�A���Ʀr���
                box[num] = i # �N��{�b���Ʀr num �A ��� box �̭�
