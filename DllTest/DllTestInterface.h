#pragma once
#ifdef DLLTEST_EXPORTS
#define TEST_PRE __declspec(dllexport)
#else
#define TEST_PRE __declspec(dllimport)
#endif

//导出标准C接口，如果导出C++接口不写
#ifdef __cplusplus
extern "C"
{
#endif

//示例函数
TEST_PRE int Add(int a, int b);

//导出标准C接口，如果导出C++接口不写
#ifdef __cplusplus
}
#endif