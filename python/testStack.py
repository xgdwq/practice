#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: testStack.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/04/07 19:58:53
"""

from lib.Stack import Stack

if __name__ == '__main__':
    stk = Stack()
    #空栈出栈，断言报错
    #stk.pop()
    stk.push(5)
    stk.push(3)
    stk.push(4)
    stk.push(8)
    print stk.getAllItem()
    print stk.getTop()
    print stk.pop()
    print stk.size()
    print stk.getAllItem()

