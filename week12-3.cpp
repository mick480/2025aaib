/// week12-3.cpp
/// Fibonacci �ƦC (�e2���ۥ[,�N�O�U1��)
/// �n�⥦�~�X�Өϥ�for�j��,�}�C
#include <stdio.h>
int main(){
    int a[30] = {0, 1};
    printf("1 ");
    for(int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i]);

    }
}
