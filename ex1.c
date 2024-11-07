#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
	int a[3],sum;
	while(scanf("%d %d %d",&a[0], &a[1], &a[2]) != -1) {
		sum = 0;
		for (int i = 0; i <= 2; i++) {
			if (a[i] < 1911 || a[i]>2024) {
				printf("%d不在此範圍內，",a[i]);
			}
			else if (a[i] % 4 == 0 && a[i] % 100 != 0) {
				printf("%d是閏年，", a[i]);
				sum += 1;
			}
			else {
				printf("%d是平年，", a[i]);
			}
			
		}
		printf("閏年總共有%d個\n", sum);
	}

	return 0;
}
