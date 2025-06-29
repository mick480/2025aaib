// week14-2.cpp
// UVA11063 B2-Sequence
#include <stdio.h>
int main()
{
	int a[100];
	int N, t=1;
	while(scanf("%d", &N) == 1){ //Part 1
		int bad = 0;
		for(int i=0; i<N; i++){ //Part 1 : input
			scanf("%d", &a[i]); //Part 1 : input
			// Part 3: bigger ans bigger
			if(i>0) if(a[i-1] >= a[i]) bad = 1;
		}
		int table[20002] = {}; // Part 4: table
		for(int i=0; i<N; i++){// Part 5: for loop
			for(int j=i; j<N; j++){// Part 5: for loop
				int now = a[i]+a[j];
				//Part 6: table[now] to check
				if(table[now]>0) bad = 1;
				table[now]++;
			}
		}

		// Part 2: output
		if(bad==0) printf("Case #%d: It is a B2-Sequence.\n\n", t);
		else printf("Case #%d: It is not a B2-Sequence.\n\n", t);
		t++;
	}
}
