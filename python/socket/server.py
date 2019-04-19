#!/usr/bin/env python
# -*- coding: utf-8 -*-
########################################################################
# 
# Copyright (c) 2019 xgdwq, Inc. All Rights Reserved
# 
########################################################################
 
"""
File: server.py
Author: xgdwq(xgdwq@126.com)
Date: 2019/04/19 14:39:42
"""

import socket
import commands
import sys
reload(sys)
sys.setdefaultencoding('utf-8')

def TCP():
    # 建立一个服务端
    #TCP
    server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    server.bind(('localhost',6999)) #绑定要监听的端口
    server.listen(5) #开始监听 表示可以使用五个链接排队
    while True:# conn就是客户端链接过来而在服务端为期生成的一个链接实例
        conn, addr = server.accept() #等待链接,多个链接的时候就会出现问题,其实返回了两个值
        print conn, addr
        while True:
            data = conn.recv(1024)  #接收数据
            print 'received from', addr, ':', data.decode()
            cmd_status, cmd_result = commands.getstatusoutput(data)
            if len(cmd_result.strip()) == 0: ##如果输出结果长度为0，则告诉客户端完成。此用法针对于创建文件或目录，创建成功不会有输出信息
                conn.sendall('Done.')
            else:
                conn.send(cmd_result) #然后再发送数据
    conn.close()

def UDP():
    # 建立一个服务端
    #UDP
    server = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    server.bind(('localhost',6999)) #绑定要监听的端口
    while True:# conn就是客户端链接过来而在服务端为期生成的一个链接实例
        data, addr = server.recvfrom(1024)  #接收数据
        print 'received from', addr, ':', data.decode()
        cmd_status, cmd_result = commands.getstatusoutput(data)
        if len(cmd_result.strip()) == 0: ##如果输出结果长度为0，则告诉客户端完成。此用法针对于创建文件或目录，创建成功不会有输出信息
            server.sendto('Done.', addr)
        else:
            server.sendto(cmd_result, addr) #然后再发送数据
    server.close()


if __name__ == '__main__':
    #TCP()
    UDP()
