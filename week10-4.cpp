//week10-4 今天的挑戰題
// LwwtCode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0;
        int a[100] = {};
        for(int i=1; i<=n; i++){ // 人類的for迴圈，從1...n
            int total = 0, now = i; //加起來的結果較total，現在的數 now
            while(now > 0 ){ // 剝皮法，如果 now 還有列，繼續剝
                total += now % 10; // 把"皮"加起來(每一位數都加起來)
                now = now / 10; // 剝完皮，數字就變小
            }
            a[total]++;
            if(a[total] > max_count) max_count = a[total];
        }
        int ans = 0;
        for(int i=0; i<100; i++){
            if(a[i] == max_count) ans++;
        }
        return ans;
    }
};
