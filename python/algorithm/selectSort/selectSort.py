#!/usr/bin/env python
# -*- coding: utf-8 -*-

class SelectSort(object):
    """
    SelectSort
    """
    def __init__(self, seq):
        """
        :type seq: List[int]
        """
        self.seq = seq

    def execute(self):
        """
        :rtype: List[int]
        """
        seq = self.seq
        lgth = len(seq)
        # 外层第i轮遍历后，则seq[i]已排好序
        for i in range(lgth):
            # j从i+1开始，依次与i比较，最后得出本轮正确的数放到i
            for j in range(lgth)[(i+1):]:
                if seq[j] < seq[i]:
                    tmp = seq[i]
                    seq[i] = seq[j]
                    seq[j] = tmp
        return seq

if __name__ == '__main__':
    seq = [1,4,3,2,5,8,6,2,7]
    s = SelectSort(seq)
    print s.execute()

