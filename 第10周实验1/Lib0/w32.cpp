#include "stdafx.h"
#include "w32.h"

int factorial(int n) {//����n�Ľ׳�
	if (n < 0)
		return 0;
	else
	{
		int sum = 1;
		for (int i = 1; i <= n; i++)
		{
			sum = sum*i;
		}
		return sum;
	}
}
