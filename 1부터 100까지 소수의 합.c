#include <stdio.h>
#include <time.h>

int main(void)
{
	int result = 0;
	int n = 0;
	clock_t start, stop;
	double duration;
	start = clock();
	for (int i = 2; i <= 100; i++) 
	{
		for (n = 2; n < i; n++)
		{
			if (i % n == 0) 
				break;
		}
		if (n == i)
			result += i;

	}
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("����ð��� %f�� �Դϴ�.", duration);
	printf("1���� 100���� �Ҽ��� �� = %d\n", result);
	return 0;
	
}