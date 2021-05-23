#include <stdio.h>

int main() {
	char name[256];
	scanf("%[^\n]s", name);
	printf("Hello, %s!", name);
	return 0;
}
