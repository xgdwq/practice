#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: testJieba.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/04/20 10:36:40
"""
import re
import logging
import sys
reload(sys)
sys.setdefaultencoding('utf-8')

import jieba
import jieba.analyse

#不打印jieba debug日志信息
jieba.setLogLevel(logging.INFO)

text = '我今天不处理逾期信用贷款，因为你们中国银行的APP根本打不开！这个逾期是你们中国银行的责任。'
text = re.sub(',|，|。|！', '', text)
print '原句子: ', text

#精确模式，默认模式，cut_all=False,
word_list = jieba.cut(text, cut_all=False)#word_list其实是一个生成器
word_list = list(word_list)
print '精确模式(默认): ', len(word_list), '|'.join(word_list)

#全模式，cut_all=True,
word_list = jieba.cut(text, cut_all=True) #word_list其实是一个生成器
word_list = list(word_list)
print '全模式: ', len(word_list), '|'.join(word_list)


#搜索引擎模式，粒度更细
word_list = jieba.cut_for_search(text) #word_list其实是一个生成器
word_list = list(word_list)
print '搜索引擎模式: ', len(word_list), '|'.join(word_list)

"""
加载以下自定义词典：./udict.txt, 第二三列代表词频和词性，可以省略
"""
jieba.load_userdict('udict.txt')
print '加载自定义词典之后...'

#精确模式，默认模式，cut_all=False,
word_list = jieba.cut(text, cut_all=False)#word_list其实是一个生成器
word_list = list(word_list)
print '精确模式(默认): ', len(word_list), '|'.join(word_list)

#全模式，cut_all=True,
word_list = jieba.cut(text, cut_all=True) #word_list其实是一个生成器
word_list = list(word_list)
print '全模式: ', len(word_list), '|'.join(word_list)


#搜索引擎模式，粒度更细
word_list = jieba.cut_for_search(text) #word_list其实是一个生成器
word_list = list(word_list)
print '搜索引擎模式: ', len(word_list), '|'.join(word_list)


#关键词提取：jieba.analyse.extract_tags(sentence, topK)
print '提取k个关键词term: ', '|'.join(jieba.analyse.extract_tags(text, 2))

