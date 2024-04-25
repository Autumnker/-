#pragma once
/*************************************************************
    date: July 2017
    copyright: Zhu En��ף����
    DO NOT distribute this code.
**************************************************************/
// ջ�����Ӵ洢 ͷ�ļ�
////////////////////////////////////////
#if !defined(LINKED_STACK_H_985552)
#define LINKED_STACK_H_985552
typedef int T; //����Ԫ������
struct LNode {
    T data;
    LNode* next;
};

struct LinkStack {
    LNode* top; // ջ��ָ��
    int len; // ջ�ĳ���
};

////////////////////////////////////////////
LinkStack* LS_Create();
void LS_Free(LinkStack* ls);
void LS_MakeEmpty(LinkStack* ls);
bool LS_IsEmpty(LinkStack* ls);
int LS_Length(LinkStack* ls);
void LS_Push(LinkStack* ls, T x);
bool LS_Pop(LinkStack* ls, T& item);
bool LS_Top(LinkStack* ls, T& item);
void LS_Print(LinkStack* ls);
#endif
//////////////////////////////////////////
