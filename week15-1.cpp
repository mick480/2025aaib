// week15-1.cpp ����ӼƦr n ���� 1...n ���ơAm �n�����k���l��
// LeetCode 2894. Divisible and Non-divisible Sums Difference
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0, num2 = 0; //����:���㰣�A�k��:�㰣
        for(int i=1; i<=n; i++){
            if( i%m > 0 ) num1 += i; //���㰣�A�[�� num1
            else num2 += i; //�㰣�A�[��num2
        }
        return num1 - num2;
    }
};
