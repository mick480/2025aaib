/// week13-3.cpp
/// ��"����۰��k"�䵪��(�̤j���]��)
#include <stdio.h>
int gcd(int a, int b) ///�Q��"��I�s�禡"�ѥL
{ /// �Ѥja, �Ѥjb
    printf("�Ѥja: %d �ѤGb: %d\n", a, b);
    if(a==0) return b; ///�J��0, �t�@��O����
    if(b==0) return a;
    return gcd(b, a%b);
} ///�Ѥj�ܦѤG
int main()
{
    printf("�п�J2�ӼƦr(ex. 51 68)");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd( a,  b);
    printf("�L���̤j���]��:%d\n", ans);

}
