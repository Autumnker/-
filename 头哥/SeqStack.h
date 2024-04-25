#pragma once
/*************************************************************
    date: July 2017
    copyright: Zhu En��ף����
    DO NOT distribute this code.
**************************************************************/
// ˳��洢��ջ ͷ�ļ�
///////////////////////////////////////////////////////////////
typedef int T;
struct SeqStack {
    T* data; // ����Ԫ��ָ��
    int top; // ջ��Ԫ�ر��
    int max; // ���ڵ���
};

SeqStack* SS_Create(int maxlen);
void SS_Free(SeqStack* ss);
void SS_MakeEmpty(SeqStack* ss);
bool SS_IsFull(SeqStack* ss);
bool SS_IsEmpty(SeqStack* ss);
int SS_Length(SeqStack* ss);
bool SS_Push(SeqStack* ss, T x);
bool SS_Pop(SeqStack* ss, T& item);
bool SS_Top(SeqStack* ss, T& item);
void SS_Print(SeqStack* ss);
