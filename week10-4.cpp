//week10-4 ���Ѫ��D���D
// LwwtCode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0;
        int a[100] = {};
        for(int i=1; i<=n; i++){ // �H����for�j��A�q1...n
            int total = 0, now = i; //�[�_�Ӫ����G��total�A�{�b���� now
            while(now > 0 ){ // ��֪k�A�p�G now �٦��C�A�~���
                total += now % 10; // ��"��"�[�_��(�C�@��Ƴ��[�_��)
                now = now / 10; // �駹�֡A�Ʀr�N�ܤp
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
