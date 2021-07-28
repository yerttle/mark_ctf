#include <stdio.h>
#include <string.h>
//https://www.youtube.com/watch?v=V9lMxx3iFWU&t=728s
void granted() {
	printf("\nAccess granted\n");
}

int main(int argc, char **argv) {
	char password[16];
	printf("Enter your password: ");
	gets(password);
	if (strcmp(password, "password1"))
	{
		printf("\nyou fail!");
	}
	else
	{
		granted();
	}
}
