#pragma once
 
#ifdef W32D_EXPORTS
#define W32D_API _declspec(dllexport)//��
#else
#define W32D_API _declspec(dllexport)
#endif

//�����Ǵ�W32D.dll������
class W32D_API CW32D {
public:
	CW32D(void);
	//TODO���ڴ�������ķ�����
};

extern W32D_API int nW32D;//����

W32D_API int fnW32D(void);//����

W32D_API int GetInt();//����
