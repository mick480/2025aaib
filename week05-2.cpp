//week05-2.cpp
//SOIT108_Base_007
#include <stdio.h>
int main()
{
	int i, a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("%d ", a[i]);
	}

}
