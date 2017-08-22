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
    node1.data = 1;
    Node node2;
    node2.data = 2;
    Node node3;
    node3.data = 3;
    Node node4;
    node4.data = 4;
    Node temp;
    List *pList = new List();
    pList -> ListInsertTail(&node1);
    pList -> ListInsertTail(&node2);
    pList -> ListInsertTail(&node3);
    pList -> ListInsertTail(&node4);
    pList -> ListTraverse();
    
    cout << "-------------------------\n";
//    获取节点
    pList -> GetElem(0, &temp);
    temp.printNode();
    cout << "---------查找data=3的节点---------------\n";
    int idx = pList -> LocateElem(&node1);
    cout << idx << "\n";
    
    cout << "---------查找node3的前驱节点----------------\n";
    Node preTemp;
    pList -> PirorElem(&node3, &preTemp);
    preTemp.printNode();
    cout << "---------查找node3的后继节点----------------\n";
    Node nextTemp;
    pList -> NextElem(&node3, &nextTemp);
    nextTemp.printNode();
    cout << "---------删除第二个节点----------------\n";
//    删除节点
    pList -> ListDelete(2, &temp);
    pList -> ListTraverse();
    delete pList;
    return 0;
}
