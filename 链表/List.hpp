//
//  List.hpp
//  数据结构学习
//
//  Created by 孙鸿健 on 2017/8/11.
//  Copyright © 2017年 孙鸿健. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "Node.hpp"


class List
{
public:
    List();
    ~List();
    void ClearList();
//    头部添加节点
    bool ListInsertHead(Node *pNode);
//    尾部添加节点
    bool ListInsertTail(Node *pNode);
//    插入节点
    bool ListInsert(int i, Node *pNode);
//    删除节点
    bool ListDelete(int i, Node *pNode);
//    遍历链表
    void ListTraverse();
//    获取节点
    bool GetElem(int i, Node *pNode);
//    查找节点是否存在,如果存在返回节点位序
    int LocateElem(Node *pNode);
//    取前驱节点
    bool PirorElem(Node *pCurrentNode, Node *pPreNode);
//    取后继节点
    bool NextElem(Node *pCurrentNode, Node *pNextNode);
private:
//    链表头结点
    Node *m_pList;
//    链表长度
    int m_iLength;
};

#endif /* List_hpp */
