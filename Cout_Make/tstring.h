#pragma once

#include <string>
#include <tchar.h>

//

#ifdef _UNICODE // 유니코드일때?
#define _V(x) (std::to_wstring(x))
#else
#define _V(x) (std::to_string(x))
#endif // _UNICODE

//#define tchar_t TCHAR
//typedef TCHAR tchar_t;
using tchar_t = TCHAR; // tchar.h에 정의되어있음
using tstring = std::basic_string<tchar_t>;

//tstring str = _T("Babo");
//int x = 10;
//our::cout << str + _V(x) << our::endl;
				   // 저 위 코드에서 이걸 string으로 할지 wstring으로 할지 알아서 결정함

//const char a[10] = "A";
//const wchar_t b[10] = L"B"; // wchar_t일때는 L을 붙여야 한다
//const tchar_t c[10] = _T("C");
//tchar_t일 때는 유니코드가 없으면 줄이 안감(tchar_t -> char) 있으면 tchar_t -> wchar_t
//_T -> L을 붙여야할지 말지 지가 결정해줌