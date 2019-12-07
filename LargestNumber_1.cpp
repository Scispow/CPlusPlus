#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int x, int y, int z, int w);

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("Largest Number -> %d", ans);

	return 0;
}

int max_of_four(int x, int y, int z, int w)
{
	int num[4] = { x,y,z,w };
	int max = 0;
	int possibility = 0;

	//her sayı kendini diğer sayılarla karşılaştırır, eğer diğer sayılardan büyüklüğü 3 kere büyük olursa (n-1) en büyük sayıdır.

	for (int i = 0; i <= 3;i++) {
		for (int j = 0; j <= 3;j++) {
			if (num[i] > num[j]) {
				possibility++;
				if (possibility == 3) {
					max = num[i];
				}

			}

		}
		possibility = 0;
	}

	return max;
}

