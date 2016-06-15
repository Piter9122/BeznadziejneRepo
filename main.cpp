#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <iostream>

int foo(int a, int b) {
    a = a + b;
    return a;
}

 int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "Lololo" << std::endl;
	foo(43, 2);
	return 0;
}
