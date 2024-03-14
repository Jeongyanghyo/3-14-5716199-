#include <stdio.h>
#include <time.h>

int main(void)
{
	int result = 0;   
	int n = 0;
	clock_t start, stop;    
	double duration;
	start = clock();   //측정 시작
	for (int i = 2; i <= 100; i++) // i는 2부터 시작, 100보다 작거나 같을때 까지 1씩 증가
	{
		for (n = 2; n < i; n++)  // n은 2부터 시작, i 보다 작을때 n은 1씩 증가
		{
			if (i % n == 0) // i를 n으로 나누었을 때 0과 비교하여 같다면 반복문 중지
				break;
		}
		if (n == i)  // n의 값이 i와 같을때 반복중 나오는 i의 값을 모두 더해준다.
			result += i;

	}
	stop = clock();  // 측정 종료
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("수행시간은 %f초 입니다.\n", duration);
	printf("1부터 100까지 소수의 합 = %d\n", result);
	return 0;
	
}