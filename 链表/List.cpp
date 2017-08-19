//
//  List.cpp
//  数据结构学习
//
//  Created by 孙鸿健 on 2017/8/11.
//  Copyright © 2017年 孙鸿健. All rights reserved.
//

#include "List.hpp"
#include <iostream>
using namespace std;


List::List()
{
    m_pList = new Node;
    m_pList -> data = 0;
    m_pList -> next = NULL;
    m_iLength = 0;
}

List::~List()
{
    ClearList();
    delete m_pList;
    m_pList = NULL;
}

void List::ClearList()
{
    Node *currentNode = m_pList -> next;
    while (currentNode != NULL) {
        Node *temp  = currentNode -> next;
        delete  currentNode;
        currentNode = temp;
    }
    m_pList -> next = NULL;
}

bool List::ListInsertHead(Node *pNode)
{
    Node *temp = m_pList -> next;
    Node *newNode = new Node;
    if (newNode == NULL) {
        return  false;
    }
    newNode -> data = pNode -> data;
    m_pList -> next = newNode;
    newNode -> next = temp;
    m_iLength++;
    return true;
}

bool List::ListInsertTail(Node *pNode)
{
    Node *currentNode = m_pList;
    while (currentNode->next != NULL) {
        currentNode = currentNode -> next;
    }
    Node *newNode = new Node;
    if (newNode == NULL) {
        return  false;
    }
    newNode -> data = pNode -> data;
    newNode -> next = NULL;
    currentNode -> next = newNode;
    m_iLength++;
    return true;
}

bool List::ListInsert(int i, Node *pNode)
{
    if(i < 0 || i > m_iLength)
    {
        return false;
    }

    Node *currentNode = m_pList;
    for(int k = 0; k < i; k++)
    {
        currentNode = currentNode -> next;
    }
    Node *newNode = new Node;
    if (newNode == NULL) {
        return  false;
    }
    newNode -> data = pNode -> data;
    newNode -> next = currentNode -> next;
    currentNode -> next = newNode;
    return true;
}

bool List::ListDelete(int i, Node *pNode)
{
    if (i < 0 || i > m_iLength) {
        return false;
    }
    
    Node *currentNode = m_pList;
    Node *currentNodeBefore = NULL;
    for (int k = 0; k <= i; k++) {
        currentNodeBefore = currentNode;
        currentNode = currentNode -> next;
    }
    currentNodeBefore -> next = currentNode -> next;
    pNode -> data = currentNode -> data;
    delete currentNode;
    currentNode = NULL;
    m_iLength--; 
    
    return true;
}

void List::ListTraverse()
{
    Node *currentNode = m_pList;
    while (currentNode -> next != NULL) {
        currentNode = currentNode -> next;
        currentNode -> printNode();
    }
}

bool List::GetElem(int i, Node *pNode)
{
    if (i < 0 || i > m_iLength) {
        return false;
    }
    Node *currentNode = m_pList;
    for (int k = 0; k <= i; k++) {
        currentNode = currentNode -> next;
    }
    pNode -> data = currentNode -> data;
    return true;
}

int List::LocateElem(Node *pNode)
{
    Node *currentNode = m_pList;
    int k = 0;
    while (currentNode -> next != NULL) {
        currentNode = currentNode -> next;
        if(currentNode -> data == pNode -> data)
        {
            return 0;
        }
        k++;
    }
    return -1;
    
}





