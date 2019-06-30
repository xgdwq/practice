#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: reversedLinkList.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/06/30 20:16:00
"""
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def reversedLinkList(self, linkList):
        head = ListNode(None)
        p = linkList
        while p is not None:
            q = ListNode(p.val)
            q.next = head.next
            head.next = q
            p = p.next
        return head.next

if __name__ == '__main__':
    s = Solution()
    n1 = ListNode(1)
    n2 = ListNode(2)
    n3 = ListNode(3)
    n1.next = n2
    n2.next = n3
    r = s.reversedLinkList(n1)
    while(r is not None):
        print r.val
        r = r.next

