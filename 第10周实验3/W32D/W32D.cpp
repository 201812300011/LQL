// W32D.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "W32D.h"

// ���ǵ���������һ��ʾ��
W32D_API int nW32D = 0;

// ���ǵ���������һ��ʾ����
W32D_API int fnW32D(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� W32D.h
CW32D::CW32D()
{
	return ;
}

int factorial(int n)
{
	if (n < 0 || n>12) return 0;
	int sum = 1;
	for (int i = 1; i <= n; i++)
		sum = sum*i;
	return sum;
}


float W32D_API FAC::convert(float deg) {
	return deg / (float)r;
}
