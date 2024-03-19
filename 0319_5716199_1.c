#include <stdio.h>
#include <time.h>

double factorial_iter(int n)
{
	int k;
	double v = 1;
	for (k = n; k > 0; k--)
		v = v * k;
	return(v);

}
double factorial_rec(int n)
{
	if (n <= 1)return(1);
	else return (n * factorial_rec(n - 1));
}

int main(void)
{
	clock_t start, stop;
	clock_t start1, stop2;
	double duration;
	double duration3;
	start = clock();
	double result_iter = factorial_iter(20);
	printf("Factorial Iterative Result: %lf\n", result_iter);
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("time: %f\n", duration);
	start1 = clock();
	double result_rec = factorial_rec(20);
	printf("Factorial Iterative Result: %lf\n", result_rec);
	stop2 = clock();
	duration3 = (double)(stop2 - start1) / CLOCKS_PER_SEC;
	printf("time: %f\n", duration3);
	return 0;
}