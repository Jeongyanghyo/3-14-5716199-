#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int result = 0;
	int n = 0;
	for (int i = 2; i <= 100; i++)
	{
		for (n = 2; n < i; n++)
		{
			if (i % n == 0) break;
		}
		if (n == i)
			result += n;
	}
	printf("1���� 100���� �Ҽ��� �� = %d\n", result);
	system("pause");
}