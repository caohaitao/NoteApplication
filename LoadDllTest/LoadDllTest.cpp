// LoadDllTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include "windows.h"
//
///**
//* 源接口为int Add(int a, int b);
//*/
//typedef int (*Add)(int a, int b);
//
//int main()
//{
//        HINSTANCE pdll = LoadLibraryA("..\\x64\\Debug\\DllTest.dll");
//        if (!pdll)
//        {
//                printf("load dll failed\n");
//                return -1;
//        }
//        printf("load dll success\n");
//        Add pFunc = NULL;
//        pFunc = (Add)GetProcAddress(pdll, "Add");
//        if (!pFunc)
//        {
//                printf("find function Add failed\n");
//                FreeLibrary(pdll);
//                return -1;
//        }
//        printf("get function Add success\n");
//        int res = pFunc(1, 2);
//        printf("1+2=%d\n", res);
//        FreeLibrary(pdll);
//        return 0;
//}

#include "DllTestInterface.h"

int main()
{
        int res = Add(1, 2);
        printf("1+2=%d\n", res);
        return 0;
}