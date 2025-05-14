// week13-4.cpp
// LeetCode 3335. Total Characters in String After Transformations
// a��b,b��c ... z�|��2�Ӧr��a�Mb
class Solution {
public:
    int a[200000] = {}; //�ܤj���}�C�A�̭����O0 �|���X�Ӫ�����
    int helper(int t){//�ϥ�"��ܩI�s���"
        if(a[t]>0) return a[t];
        if(t<26) return 1;
        a[t] = (helper(t-26) + helper(t-26+1)) % 1000000007;
        return a[t];
    }

    int lengthAfterTransformations(string s, int t) {
       int ans = 0;
        for(char c : s){
        ans = (ans + helper(t + c-'a')) % 1000000007;
        }
        return ans;
    }
};
