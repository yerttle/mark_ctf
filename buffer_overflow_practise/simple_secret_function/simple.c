#include <stdio.h>
void secretFunc() {
	printf("SecretFunc");
}

int main(int argc, char **argv) {
	printf("Why are you copying me?\n");
	char buffer[5];
	gets(buffer);
	printf("%s", buffer);
}
