#pragma once
#include <cstdio> // stdio.h와 비슷함
#include <Windows.h>
#include "tstring.h"


namespace our // our이라는 네임스페이스 지정
{
	struct ostream // 구조체 사용
	{
        ostream& operator << (tchar_t c)
        {
            _tprintf(_T("%d"), c);
            return *this;
        }

        ostream& operator << (int d)
        {
            _tprintf(_T("%d"), d);
            return *this;
        }

        ostream& operator << (unsigned u)
        {
            _tprintf(_T("%u"), u);
            return *this;
        }

        ostream& operator << (long ld)
        {
            _tprintf(_T("%ld"), ld);
            return *this;
        }

        ostream& operator << (unsigned long lu)
        {
            _tprintf(_T("%lu"), lu);
            return *this;
        }

        ostream& operator << (long long lld)
        {
            _tprintf(_T("%lld"), lld);
            return *this;
        }

        ostream& operator << (unsigned long long llu)
        {
            _tprintf(_T("%llu"), llu);
            return *this;
        }

        ostream& operator << (float f)
        {
            _tprintf(_T("%f"), f);
            return *this;
        }

        ostream& operator << (double f) // 연산자 오버로딩 지리네
        {
            _tprintf(_T("%f"), f);
            return *this;
        }

        ostream& operator << (long double lf)
        {
            _tprintf(_T("%lf"), lf);
            return *this;
        }

        ostream& operator << (const tchar_t* s)
        {
            _tprintf(_T("%s"), s);
            return *this;
        }

    };
    tchar_t endl = '\n';

    ostream cout;
}

struct _console
{
    void log(const tstring& s)
    {
        our::cout << s.c_str() << our::endl;
    }

    void debug(const tstring& s)
    {
        OutputDebugString((s + our::endl).c_str()); // 비주얼스튜디오 디버그 창에 출력됨
    }
};

_console console;