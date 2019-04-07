#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: testLinkList.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/04/06 18:12:50
"""

from lib.LinkList import LinkList

if __name__ == '__main__':
    #初始化空链表
    linkList = LinkList()
    #用序列初始化链表
    linkList.initByList([1, 2, 3])
    #链表末尾加一个值为5的节点
    linkList.appendLinkNode(5)
    #插入一个节点，位置为第0位（<=0时插在首位），值为6 
    linkList.insertLinkNode(0, 6)
    #插入一个节点，位置为第3位（中间） 
    linkList.insertLinkNode(2, 6)
    #插入一个节点，位置为第10位（>=length-1时插在末尾) 
    linkList.insertLinkNode(10, 6)
    # 打印列表
    print linkList.getLinkNodes()
    # 删除第0位置的节点
    linkList.deleteLinkNode(0)
    print linkList.getLinkNodes()
    # 删除第末尾的节点
    linkList.deleteLinkNode(linkList.getLength() - 1)
    print linkList.getLinkNodes()
    # 删除第3位（中间）节点
    linkList.deleteLinkNode(3)
    print linkList.getLinkNodes()
    # 清空链表
    linkList.clear()
    print linkList.getLinkNodes()
    linkList.initByList([1, 2, 3])
    print linkList.getLinkNodes()
    # 链表逆序
    linkList.reverseLinkList()
    print linkList.getLinkNodes()

