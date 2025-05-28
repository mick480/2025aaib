/// week15-2.cpp
/// 騎車時，觀察前方的車牌，發現好像很多重複的數字
/// 有重複的數字機率有多高
#include <stdio.h>
int helper(int n)
{
    int a[10] = {}; ///統計表
    while(n>0){ ///剝皮法
        int now = n%10; ///剝出一層皮
        a[now]++; ///這個皮，多出現一次
        if(a[now]>1) return 1; ///有找到重複數字
        n = n/10; ///剝皮法

    }
    return 0; ///都沒有提早結束，就是找不到重複的數字
 ///helper()回傳0代表沒有找到，回傳1表有找到
}


int main()
{
    int ans = 0;
    for(int i=0; i<=9999; i++){
        if(helper(i)==1) ans++;
    }
    printf("%d", ans);

}
