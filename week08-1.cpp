///LeetCode 3375.Minimum Operations to Make Array Values Equal to K
///璶ち碭р计跑ΘK(碞琌kΤ碭计)
/// 计Τ1...100
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a[101] = {}; ///皚柑常0
        int N = nums.size();
        for(int i=0; i<N; i++){
            int now = nums[i];
            if(now<k) return -1; ///Τ计? ê碞ア毖舘! 莱⊿快猭ЧΘヴ叭常璶跑K
            a[now]++; ///瞷计+1(参璸м砃)

        }
        int ans = 0;
        for(int now = k+1; now<=100; now++){ ///璶琩a[now]Τ碭ぃ计
            if(a[now]>0) ans++;
        }
        return ans;
    }
};
