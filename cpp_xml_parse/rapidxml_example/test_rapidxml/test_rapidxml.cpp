// test_rapidxml.cpp : Defines the entry point for the console application.
//
#include "my_example/test.h"
#include <windows.h>
#include <tchar.h>
/*
����ʹ��rapidxml
rapidxml�Ǽ��õ�һ��xml������
���������Ҫ����ֱ��֧��unicode����Ҫ��һЩ�޸ģ����Ի�����utf8��дxml���ⲿ��ת��

2012-12-14
cswuyg@gmail.com
*/


void test_func()
{
	CTest obj;
	obj.test_release_xml();
	obj.test_load_xml();
}


int _tmain(int argc, _TCHAR* argv[])
{
	test_func();
	system("pause");
	return 0;
}

