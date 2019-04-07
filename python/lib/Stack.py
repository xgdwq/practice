#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: Stack.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/04/07 17:42:52
"""

from Exception import *

STACK_CAPACITY = 10000

class Stack(object):
    """
    @brief: 栈的类定义
    """
    def __init__(self, capacity=STACK_CAPACITY):
        """
        @brief: 初始化栈对象
        @param capacity: 栈的容量
        """
        self.capacity = capacity
        self.stackList = []
        self.top = -1

    def isFull(self):
        """
        @brief: 判断栈是否满员，若是，不能再入栈
        @return: bool -> True|False
        """
        return True if self.top + 1 == self.capacity else False

    def size(self):
        """
        @brief: 返回栈中当前元素个数
        @return: int
        """
        return self.top + 1

    def isEmpty(self):
        """
        @brief: 判断栈是否为空
        @return: bool -> True|False
        """
        return True if self.top == -1 else False

    def push(self, value):
        """
        @brief: 入栈
        @param value: 入栈元素的值
        """
        assert not self.isFull()
        #if self.isFull():
        #   raise StackFullError('stack is full!')        
        self.stackList.append(value)
        self.top += 1

    def pop(self):
        """
        @brief: 出栈，弹出栈顶元素，并返回该元素值
        @return: 
        """
        assert not self.isEmpty()
        self.top -= 1
        return self.stackList.pop()

    def getTop(self):
        """
        @brief: 获取栈顶元素
        @return: 自定义
        """
        if self.isEmpty():
            raise StackEmptyError('stack is empty!')        
        return self.stackList[self.top]

    def getAllItem(self):
        """
        @brief: 返货所有元素，按后进先出顺序
        @return: list
        """
        return self.stackList[::-1]


