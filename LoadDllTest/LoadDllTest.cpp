// LoadDllTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
//#include "windows.h"
//
///**
//* Դ�ӿ�Ϊint Add(int a, int b);
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