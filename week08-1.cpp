///LeetCode 3375.Minimum Operations to Make Array Values Equal to K
///�n���X�M�A�~���Ʀr���ܦ�K(�]�N�Ok�H�W�A���X�ӼƦr)
/// �Ʀr�u��1...100
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a[101] = {}; ///�}�C�ŧi�A�̭�����0
        int N = nums.size();
        for(int i=0; i<N; i++){
            int now = nums[i];
            if(now<k) return -1; ///���p����? ���N�����o! �����S��k�������ȡA���n��K
            a[now]++; ///�{�b���Ʀr+1(�έp�A�޳N)

        }
        int ans = 0;
        for(int now = k+1; now<=100; now++){ ///�n�d��a[now]���X�Ӥ��P����
            if(a[now]>0) ans++;
        }
        return ans;
    }
};
