#include <stdio.h>
#include <time.h>

int main(void)
{
	int result = 0;   
	int n = 0;
	clock_t start, stop;    
	double duration;
	start = clock();   //���� ����
	for (int i = 2; i <= 100; i++) // i�� 2���� ����, 100���� �۰ų� ������ ���� 1�� ����
	{
		for (n = 2; n < i; n++)  // n�� 2���� ����, i ���� ������ n�� 1�� ����
		{
			if (i % n == 0) // i�� n���� �������� �� 0�� ���Ͽ� ���ٸ� �ݺ��� ����
				break;
		}
		if (n == i)  // n�� ���� i�� ������ �ݺ��� ������ i�� ���� ��� �����ش�.
			result += i;

	}
	stop = clock();  // ���� ����
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("����ð��� %f�� �Դϴ�.\n", duration);
	printf("1���� 100���� �Ҽ��� �� = %d\n", result);
	return 0;
	
}