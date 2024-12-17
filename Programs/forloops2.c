#include <stdio.h>

int main() {
	int num, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i = i + 1){
	printf("Hello World\n");
	}

	return 0;
}
