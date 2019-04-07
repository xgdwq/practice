#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: LinkList.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/04/06 17:44:26
"""

from LinkNode import LinkNode

class LinkList(object):
    """
    @brief 单链表类
    """
    def __init__(self):
        """
        @brief: 初始化链表
        """
        self.head = None

    def initByList(self, input_list):
        """
        @brief: 用给定列表初始化链表
        @param input_list: list, 初始化序列参数
        """
        self.head = LinkNode(input_list[0])
        p = self.head
        for itm in input_list[1:]:
            p.next = LinkNode(itm)
            p = p.next

    def getLength(self):
        """
        @brief: 获取链表长度
        @return: int
        """
        p, length = self.head, 0
        while p is not None:
            length += 1;
            p = p.next
        return length

    def isEmpty(self):
        """
        @brief: 判断链表是否为空
        @return: bool True|False
        """
        return True if self.head is None else False

    def appendLinkNode(self, value):
        """
        @brief: 追加一个节点
        @param value: 追加节点的值
        """
        newLinkNode = LinkNode(value)
        if self.head is None:
           self.head = newLinkNode
        else:
            p = self.head
            while p.next is not None:
                p = p.next
            p.next = newLinkNode

    def getLinkNodes(self):
        """
        @brief: 获取所有节点值
        @return: list
        """
        p = self.head
        valueList = []
        while p is not None:
            valueList.append(p.data)
            p = p.next
        return valueList

    def insertLinkNode(self, index, value):
        """
        @brief: 插入一个节点
        @param index: 插入位置
        @param value: 插入节点的值
        """
        length = self.getLength()
        newLinkNode = LinkNode(value)
        if index <= 0:
            newLinkNode.next = self.head
            self.head = newLinkNode
        elif index >= length:
            self.appendLinkNode(value)
        else:
            p = self.head
            # 走index-1步，到达idx=index-1,插入后，新增节点位置即为idex
            for idx in range(index - 1):
                p = p.next
            newLinkNode.next = p.next
            p.next = newLinkNode

    def deleteLinkNode(self, index):
        """
        @brief: 删除指定序号的节点
        """
        length = self.getLength()
        if self.isEmpty():
            print 'Listlist empty!'
        elif index < 0 or index >= length:
            print 'wrong index!'
        elif index == 0:
            self.head = self.head.next
        # 其实和最后一个分之逻辑一样
        elif index == length - 1:
            p = self.head
            for idx in range(length - 2):
                p = p.next
            p.next = None
        else:
            p = self.head
            for idx in range(index - 1):
                p = p.next
            p.next = p.next.next

    def clear(self):
        """
        @brief: 链表置空
        """
        if self.isEmpty():
            print 'already empty!'
            return
        p = self.head
        while p.next is not None:
            tmp = p
            p = p.next
            del tmp
        self.head = None

    def reverseLinkList(self):
        """
        @brief 链表逆序
        """
        if self.isEmpty() or self.getLength() == 1:
            return self.head
        else:
            p = self.head
            self.head = None
            while p is not None:
                newLinkNode = LinkNode(p.data, self.head)
                self.head = newLinkNode
                #以上两行可以用下面一行代替，即每一个节点插在头部即可->头插法
                #self.insertLinkNode(0, p.data)
                p = p.next
            return self.head
