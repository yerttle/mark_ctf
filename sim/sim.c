#include <stdio.h>
#include <string.h>

int main()
{
	char password[16];
	printf("Enter your password: ");
	gets(password);

	if (strcmp(password, "password1"))
	{
		printf("You Fail!\n");
		return 0;
	}
	else
	{
		granted();
		return 0;
	}

}

void granted()
{
	printf("Granted!!\n");
}
