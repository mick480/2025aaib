/// week11-2.cpp
/// �禡�ŧi�A�禡�w�q�A�禡�I�s(���/�禡)
#include <stdio.h>
int addnum(int a, int b) /// �ŧi2�ӰѼƪ��Ϊ�
{ ///�e���O ���/�禡 ���w�q
    printf("�{�b�i�J addnum() �禡��, a:%d b:%d\n", a, b);
    int x;
    x = a+b;
    printf("���ۥ[��, �o��ƭ�%d �Nreturn �^��\n", x);
    return x; /// �^�ǵ������Ϊ��a��

}

int main()
{
    int ans = addnum(10, 30); ///�ڭ̨ϥ�/�I�s���"�ۭq�禡"
    printf("%d", ans);

}
