#!/usr/bin/python
# -*- coding: utf-8 -*-
import sys
import re
T = int(input())
for cas in range(T):
    vis=[True]*20
    s = input()
    for l,m,r in zip(s, s[1:], s[2:]):
        if l in '-+*=' and m=='-' and r=='?' : vis[0] = False
    for sub in re.split(r'[-+*=]',s):
        if len(sub)>1 and sub[0]=='?' : vis[0] = False
    for i in range(10):
        if(str(i) in s):
            vis[i] = False
    for i in range(10):
        if(vis[i]):
            l,r =s.replace('?',str(i)).split('=')
            if(eval(l)==eval(r)):
                print(i)
                break
    else:
        print(-1)