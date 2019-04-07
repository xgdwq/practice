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
    linkList = LinkList()
    linkList.initByList([1, 2, 3])
    linkList.appendLinkNode(5)
    linkList.insertLinkNode(0, 6)
    linkList.insertLinkNode(3, 6)
    linkList.insertLinkNode(10, 6)
    print linkList.getLinkNodes()
    linkList.deleteLinkNode(0)
    print linkList.getLinkNodes()
    linkList.deleteLinkNode(linkList.getLength() - 1)
    print linkList.getLinkNodes()
    linkList.deleteLinkNode(3)
    print linkList.getLinkNodes()
    linkList.clear()
    print linkList.getLinkNodes()
    linkList.initByList([1, 2, 3])
    print linkList.getLinkNodes()
    linkList.reverseLinkList()
    print linkList.getLinkNodes()

