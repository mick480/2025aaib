/// week03-4.cpp
/// M90H044 瘋狂澄社不能打中文，會變亂碼
/// 程式貼到CodeBlocks 再寫註解
#include <stdio.h>
int main()
{
	int ans = 0;///答案加到這裡面
	///迴圈前面ans是 0
	int N;/// 有一個整數 N
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		ans += i; ///迴圈中間 修改ans

	}
	printf("%d",ans);
}
///迴圈後面， 印出ans
