#include <stdio.h>
#include <stdlib.h>
//交换两个大小为5的数组内容
int main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 5, 6, 7, 8, 9 };
		int i = 0;
		int tmp = 0;
		for (i = 0; i < 5; i++){
			tmp = a[i];
			a[i] = b[i];
			b[i] = tmp;
		}

		for (i = 0; i < 5; i++){
			printf("%d ", a[i]);
		}
		putchar('\n');

		for (i = 0; i < 5; i++)
		{
			printf("%d ", b[i]);
		}
		putchar('\n');
		system("pause");
		return 0;
}