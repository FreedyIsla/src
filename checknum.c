#include <stdio.h>
int main(void) {
	int num;
	scanf("%d",&num);
	if(num<0)
	printf("NEGATIVE");
	else if(num>0)
	printf("POSITIVE");
	else
	printf("Zero");
	return 0;
}
