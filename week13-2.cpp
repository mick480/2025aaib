/// week13-2.cpp
/// 想算最大公因數,以方便分子分母"約分"
#include <stdio.h>
int main()
{
    int a=51, b=68;
    int ans=1;
    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("找到 %d %d 的最大公因數: %d\n", a, b, ans);
    printf("%d/%d 約分後, 變成 %d/%d\n", a, b, a/ans, b/ans);
}
