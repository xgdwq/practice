#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: nextBigger.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/08/17 18:41:53
"""
def nextBigger(nums):
    size = len(nums)
    ans = [-1]*size
    stack = []
    i = 0
    while i < size:
        if stack and nums[i] > nums[stack[-1]]:
            ans[stack.pop()] = nums[i]
        else:
            stack.append(i)
            i += 1
    while stack:
        ans[stack.pop()] = -1
    return ans

if __name__ == '__main__':
    l = [1,5,4,7]
    print nextBigger(l)
