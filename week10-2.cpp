/// week10-2.cpp
/// ���F�U�g�Ҹ�"�ϧǼƦr"�ڭ̭n�� %10 /10��֪k
#include <stdio.h>
int main()
{
    printf("�п�J1�ӼƦr(ex. 379): ");
    int n;
    scanf("%d", &n); /// �п�J���
    printf("�A��J�F %d\n",n);
    ///printf("�L���Ӧ�ƬO %d\n",n%10);
    ///printf("�L���Q��ƬO %d\n",n/10%10);
    ///printf("�L���ʦ�ƬO %d\n",n/10/10%10);
    while(n>0){ ///�p�Gn�٨S������A�N�~����
        printf("�{�b�� %d ��� %d\n",n%10);
        n = n / 10; ///�駹�֪�n�ܤp�F
    }
}
