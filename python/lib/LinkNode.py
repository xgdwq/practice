#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: LinkNode.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/04/06 17:33:43
"""

class LinkNode(object):
    """
    @brief: definition of a single Node
    """
    def __init__(self, value, next=None):
        """
        @brief:  初始化单节点
        @param value: 不限制类型，节点data域的值
        @param next: Node类型，节点ext域的值
        """
        self.data = value
        self.next = next
