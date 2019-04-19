#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: client.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/04/19 14:45:49
"""
import socket# 客户端 发送一个数据，再接收一个数据
import sys
reload(sys)
sys.setdefaultencoding('utf-8')

#client = socket.socket(socket.AF_INET,socket.SOCK_STREAM) #声明socket类型，同时生成链接对象(TCP)
client = socket.socket(socket.AF_INET,socket.SOCK_DGRAM) #声明socket类型，同时生成无链接对象(UDP)
client.connect(('localhost',6999)) #建立一个链接，连接到本地的6969端口
while True:
    # addr = client.accept()
    # print '连接地址：', addr
    cmd = raw_input('Please input: ')  #strip默认取出字符串的头尾空格
    client.sendall(cmd.encode('utf-8'))  #发送一条信息 python3 只接收btye流
    data = client.recv(1024) #接收一个信息，并指定接收的大小 为1024字节
    print('recv:', data.decode()) #输出我接收的信息
client.close() #关闭这个链接

