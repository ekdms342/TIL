#include <stdio.h>
int main(void)
{
	int A, Z, result;
	for (A = 1; A < 10; A++)
	{

		for (Z = 1; Z < 10; Z++)
		{
			result = (A * 10 + Z) + (Z * 10 + A);
			if (result == 99)
			{
				printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
			}
		}
	}
	return 0;
}