#pragma once

#include <string>
#include <tchar.h>

//

#ifdef _UNICODE // �����ڵ��϶�?
#define _V(x) (std::to_wstring(x))
#else
#define _V(x) (std::to_string(x))
#endif // _UNICODE

//#define tchar_t TCHAR
//typedef TCHAR tchar_t;
using tchar_t = TCHAR; // tchar.h�� ���ǵǾ�����
using tstring = std::basic_string<tchar_t>;

//tstring str = _T("Babo");
//int x = 10;
//our::cout << str + _V(x) << our::endl;
				   // �� �� �ڵ忡�� �̰� string���� ���� wstring���� ���� �˾Ƽ� ������

//const char a[10] = "A";
//const wchar_t b[10] = L"B"; // wchar_t�϶��� L�� �ٿ��� �Ѵ�
//const tchar_t c[10] = _T("C");
//tchar_t�� ���� �����ڵ尡 ������ ���� �Ȱ�(tchar_t -> char) ������ tchar_t -> wchar_t
//_T -> L�� �ٿ������� ���� ���� ��������