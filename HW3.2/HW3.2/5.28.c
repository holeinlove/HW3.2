#include <stdio.h>

void convert(char s[]);

int main(void)
{
	char s[1000];

	printf("Enter a string:\n");
	scanf("%s", &s);

	convert(s);
	printf("%s\n", s);

	system("pause");
	return 0;
}

void convert(char s[])
{
	int c = 0;
	char ch;
ain
	while (s[c] != '\0')
	{
		ch = s[c];
		if (ch >= 'A' && ch <= 'Z')
			s[c] += 32;
		else if (ch >= 'a' && ch <= 'z')
			s[c] -= 32;
		c++;
	}
}