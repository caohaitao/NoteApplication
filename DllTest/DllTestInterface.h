#pragma once
#ifdef DLLTEST_EXPORTS
#define TEST_PRE __declspec(dllexport)
#else
#define TEST_PRE __declspec(dllimport)
#endif

//������׼C�ӿڣ��������C++�ӿڲ�д
#ifdef __cplusplus
extern "C"
{
#endif

//ʾ������
TEST_PRE int Add(int a, int b);

//������׼C�ӿڣ��������C++�ӿڲ�д
#ifdef __cplusplus
}
#endif