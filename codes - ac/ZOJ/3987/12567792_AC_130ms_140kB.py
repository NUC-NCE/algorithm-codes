#!/usr/bin/python
# -*- coding: utf-8 -*-
t = int(input());
for i in range(t):
        n, m = map(int, raw_input().split())
        base = 1
        ans = 0
        while (base - 1) * m <= n:
                base *= 2
        while n > 0:
                while (base - 1) * m >= n:
                    base /= 2
                ans += base
                if base * m < n:
                    n -= base * m
                else:
                    n %= base
        print ans