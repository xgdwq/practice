#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: regExp.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/04/20 10:36:40
"""
import re
import sys
reload(sys)
sys.setdefaultencoding('utf-8')

"""
总结:
1, 替换: re.sub(pattern, replace, string)
2, 判断指定（多个）字符串是否存在: pattern.search(string), 如果pattern有括号分组，则最后可用group获得各个匹配值
3，获取所有匹配值列表: pattern.findall(string)
"""

# 正则中注意表达式和匹配字符串需要同种编码，比如都是unicode
text = '我今天不处理逾期信用贷款，因为你们中国银行的APP根本打不开。ok, well done, 1,2,3！房子50平，不大！'
print '原字符串: ',text

# 一次性剔除多个指定的字符
reg = ',|，|。|！'
pt = re.compile(reg)
print '剔除可枚举的标点: ',re.sub(pt, '', text)
print '返回匹配上的结果列表(#分隔): ', '#'.join(pt.findall(text))

# 连续字符（比如中文，数字，英文）处理（剔除，提取等）
text = unicode(text)
reg = u'[\u4e00-\u9fa5]'
pt = re.compile(reg)
print '剔除中文: ',re.sub(pt, '', text)
print '提取中文: ',''.join(pt.findall(text))

#提取中文、数字、字母 <=> 剔除所有标点
text = unicode(text)
reg = u'[\u4e00-\u9fa5a-zA-Z0-9]'
pt = re.compile(reg)
print '提取中文、数字、字母 <=> 剔除所有标点: ',''.join(pt.findall(text))

#判断有无中文（数字）
reg = u'[\u4e00-\u9fa5]+'
text = unicode(text)
pt = re.compile(reg)
print 'if has chinese: ',
if pt.search(text):
    print 'y'
else:
    print 'n'

pt = re.compile(u'([1-9]\d*)(平|坪|㎡)')
print '分组匹配,group与group(0)代表全体, group(n)代表第n个括号匹配上的值: ', pt.search(text).group(1)
#此时pt.findall(text)返回一个元祖的列表
print 'pt.findall(text) == pt.search(text).group(): ', ''.join(list(pt.findall(text)[0]))
