#include <stdio.h>
#include <time.h>

double slow_power(double x, int n)
{
	int i;
	double result = 1.0;
	for (i = 0; i < n; i++)
		result = result * x;
	return(result);
}

double power(double x, int n)
{
	if (n == 0) return 1;
	else if ((n % 2) == 0)
		return power(x * x, n / 2);
	else return x * power(x * x, (n - 1) / 2);
}

int main(void)
{
	clock_t start, stop;
	clock_t start1, stop2;
	double duration;
	double duration3;
	start = clock();
	double result_iter = slow_power(13,21);
    printf("Power Iterative Result: %lf\n", result_iter);
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("time: %f\n", duration);
	start1 = clock();
	double result_rec = power(13, 21);
	printf("Power Recursive Result: %lf\n", result_rec);
	stop2 = clock();
	duration3 = (double)(stop2 - start1) / CLOCKS_PER_SEC;
	printf("time: %f\n", duration3);

	return 0;
}