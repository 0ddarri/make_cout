#pragma once
#include <cstdio> // stdio.h와 비슷함

namespace our // our이라는 네임스페이스 지정
{
	struct ostream // 구조체 사용
	{
        ostream& operator << (double lf) // 연산자 오버로딩 사용
        {
            printf("%lf", lf);
            return *this;
        }

        ostream& operator << (int d)
        {
            printf("%d", d);
            return *this;
        }

        ostream& operator << (unsigned int u)
        {
            printf("%u", u);
            return *this;
        }

        ostream& operator << (long ld)
        {
            printf("%ld", ld);
            return *this;
        }

        ostream& operator << (unsigned long lu)
        {
            printf("%lu", lu);
            return *this;
        }

        ostream& operator << (long long lld)
        {
            printf("%lld", lld);
            return *this;
        }

        ostream& operator << (unsigned long long llu)
        {
            printf("%llu", llu);
            return *this;
        }

        ostream& operator << (char c) // char 출력
        {
            printf("%c", c);
            return *this;
        }

        ostream& operator << (const char* s) // string 출력
        {
            printf("%s", s);
            return *this;
        }


	};
	char endl = '\n'; // endl 구현
	ostream cout; // 이를 통해 구조체 접근
}