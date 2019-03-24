#!/usr/bin/env python
# -*- coding: utf-8 -*-

class Bubble(object):
    """
    Bubble
    """
    def __init__(self, seq):
        """
        :type seq: List[int]
        """
        self.seq = seq

    def bubble(self):
        """
        :rtype: List[int]
        """
        seq = self.seq
        lgth = len(seq)
        for i in range(lgth):
            for j in range(lgth - i - 1):
                if seq[j] > seq[j+1]:
                    tmp = seq[j]
                    seq[j] = seq[j+1]
                    seq[j+1] = tmp
        return seq

if __name__ == '__main__':
    seq = [1,4,3,2,5,8,6,2,7]
    b = Bubble(seq)
    print b.bubble()

