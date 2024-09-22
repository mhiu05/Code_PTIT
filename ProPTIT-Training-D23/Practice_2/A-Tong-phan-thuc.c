#include <stdio.h>
 
int main(){
	int n; scanf ("%d", &n);
	double sum = 1;
	for (int i = 2; i <= n; ++i){
		sum += 1.00 / i;
	}
	printf ("%.4lf", sum);
	return 0;
}