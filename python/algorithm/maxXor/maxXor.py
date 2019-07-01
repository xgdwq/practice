#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: maxXor.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/07/01 23:05:38
"""
class Solution(object):
    def getMaxXor(self, nums):
        res = 0
        mask = 0
        for i in range(31, -1, -1):
            mask = mask | (1 << i)
            s = set()
            for num in nums:
                s.add(mask & num)
            #import pdb;pdb.set_trace()
            tmp = res | (1 << i)
            for pre in s:
                if tmp ^ pre in s:
                    res = tmp
                    break
        return res

if __name__ == '__main__':
    nums = [3,10,5,25,2,8]
    s = Solution()
    print s.getMaxXor(nums)

