#include <stdio.h>

int lcm(int, int);

int main()
{
	int n1, n2;

	printf("Enter two positive interger:");
	scanf_s("%d %d", &n1, &n2);
	printf("The LCM of %d and %d is %d.", n1, n2, lcm(n1, n2));

	system("pause");
	return 0;
}

int lcm(int n1, int n2)
{
	int max;
	max = (n1 > n2) ? n1 : n2;

	while (1)
	{
		if (max % n1 == 0 && max % n2 == 0)
		{
			return max;
			break;
		}
		max++;
	}
}