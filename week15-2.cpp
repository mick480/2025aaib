/// week15-2.cpp
/// �M���ɡA�[��e�誺���P�A�o�{�n���ܦh���ƪ��Ʀr
/// �����ƪ��Ʀr���v���h��
#include <stdio.h>
int helper(int n)
{
    int a[10] = {}; ///�έp��
    while(n>0){ ///��֪k
        int now = n%10; ///��X�@�h��
        a[now]++; ///�o�ӥ֡A�h�X�{�@��
        if(a[now]>1) return 1; ///����쭫�ƼƦr
        n = n/10; ///��֪k

    }
    return 0; ///���S�����������A�N�O�䤣�쭫�ƪ��Ʀr
 ///helper()�^��0�N��S�����A�^��1�����
}


int main()
{
    int ans = 0;
    for(int i=0; i<=9999; i++){
        if(helper(i)==1) ans++;
    }
    printf("%d", ans);

}
