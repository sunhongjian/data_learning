//
//  demo.cpp
//  数据结构学习
//
//  Created by 孙鸿健 on 2017/8/15.
//  Copyright © 2017年 孙鸿健. All rights reserved.
//

#include <stdlib.h>
#include "List.hpp"
#include <iostream>
using namespace std;

int main(void)
{
    Node node1;
    node1.data = 3;
    Node node2;
    node2.data = 4;
    Node node3;
    node3.data = 5;
    Node node4;
    node4.data = 6;
    Node temp;
    List *pList = new List();
    pList -> ListInsertHead(&node1);
    pList -> ListInsertHead(&node2);
    pList -> ListInsertHead(&node3);
    pList -> ListInsertHead(&node4);
    pList -> ListTraverse();
    
    cout << "-------------------------\n";
//    获取节点
    pList -> GetElem(0, &temp);
    temp.printNode();
    cout << "-------------------------\n";
//    删除节点
    pList -> ListDelete(2, &temp);
    pList -> ListTraverse();
    delete pList;
    return 0;
}
