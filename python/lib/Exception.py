#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: Exception.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/04/07 19:21:50
"""

class StackFullError(Exception):
    """
    @brief: 栈容量已满，再次入栈抛此异常
    """
    def __init__(self, args):
        """
        @brief: 初始化参数
        """
        self.args = args

class StackEmptyError(Exception):
    """
    @brief: 栈空，再次出栈抛此异常
    """
    def __init__(self, arg):
        """
        @brief: 初始化参数
        """
        self.arg = arg
