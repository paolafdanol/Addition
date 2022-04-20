#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a;
	int b;
	int sum;
	printf("Dame tu primer numero:\n");
	scanf("%d",&a);
	printf("Dame tu segundo numero:\n");
	scanf("%d",&b);
	sum=a+b;
	printf("El resultado de tu numero es:%d\n", sum);
	return 0;
}
