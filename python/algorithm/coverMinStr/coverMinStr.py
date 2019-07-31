#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: coverMinStr.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/07/31 15:43:21
"""

def coverMinStr(source, target):
    size_s = len(source)
    size_t = len(target)
    dic_t = {}
    win = {}
    l = r = 0
    count = 0
    ans = float('inf'), l, r
    #对目标串的每个字符进行计数，方便后续判断滑动窗口中是否覆盖某个字符串
    for c in target:
        dic_t[c] = dic_t.get(c, 0) + 1
    while r < size_s:
        c = source[r]
        win[c] = win.get(c, 0) + 1
        #覆盖了目标串的一个字符，count计数+1
        if c in target and win[c] == dic_t[c]:
            count += 1
        #满足了覆盖全部目标串，不断压缩双指针l和r的间距，直至不满足，期间不断更新左右端点以及下标
        while l <= r and count == len(dic_t):
            if r - l + 1 < ans[0]:
                ans = r - l + 1, l, r
            c_l = source[l]
            win[c_l] -= 1
            #到达此条件后，不能再压缩
            if c_l in target and win[c_l] < dic_t[c_l]:
                count -= 1
            l += 1
        r += 1
    return '' if ans[0] > size_s else source[ans[1]:ans[2]+1]
if __name__ == '__main__':
    print coverMinStr('ADOBECODEBANC', 'ABC')
