#pragma once
#include <cstdio> // stdio.h�� �����

namespace our // our�̶�� ���ӽ����̽� ����
{
	struct ostream // ����ü ���
	{
        ostream& operator << (double lf) // ������ �����ε� ���
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

        ostream& operator << (char c) // char ���
        {
            printf("%c", c);
            return *this;
        }

        ostream& operator << (const char* s) // string ���
        {
            printf("%s", s);
            return *this;
        }


	};
	char endl = '\n'; // endl ����
	ostream cout; // �̸� ���� ����ü ����
}