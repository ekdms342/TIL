﻿#include <stdio.h>
int main(void)
{
	int floor, i, sumfloor = 0 ,j = 0;
	int villa[8] = { 0 };
	for (floor = 0; floor < 4; floor++)
	{
		for (i = 0; i < 2; i++)
		{
			printf("%d 층 %d 호 인구수: ",floor + 1,i + 1);
			scanf("%d", &villa[j]);
			j++;
		}
	}
	j = 0;
	for (floor = 0; floor < 4; floor++)
	{
		sumfloor = 0;
		for (i = 0; i < 2; i++)
		{
			sumfloor += villa[j];
			j++;
		}
		printf("%d 층 인구수: %d \n", floor + 1, sumfloor);
	}
	return 0;
}
