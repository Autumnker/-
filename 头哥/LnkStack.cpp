////#define _CRT_SECURE_NO_WARNINGS 1
///*************************************************************
//    date: June 2017
//    copyright: Zhu En��ף����
//    DO NOT distribute this code.
//**************************************************************/
//// ���Ӵ洢��ջʵ���ļ�
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "LnkStack.h"
//
///*����ջ*/
//LinkStack* LS_Create()
//{
//    LinkStack* ls = (LinkStack*)malloc(sizeof(LinkStack));
//    ls->top = NULL;
//    ls->len = 0;
//    return ls;
//}
//
///*�ͷ�ջ*/
//void LS_Free(LinkStack* ls)
//{
//    LNode* curr = ls->top;
//    while (curr) {
//        LNode* next = curr->next;
//        free(curr);
//        curr = next;
//    }
//    free(ls);
//}
//
///*��ջ��Ϊ��ջ*/
//void LS_MakeEmpty(LinkStack* ls)
//{
//    LNode* curr = ls->top;
//    while (curr) {
//        LNode* next = curr->next;
//        free(curr);
//        curr = next;
//    }
//    ls->top = NULL;
//    ls->len = 0;
//}
//
///*�ж�ջ�Ƿ�Ϊ��*/
//bool LS_IsEmpty(LinkStack* ls)
//{
//    // �������ﲹ����룬��ɱ�������
//    /********** Begin *********/
//    if (ls->len == 0)
//        return true;
//    else
//        return false;
//    /********** End **********/
//}
//
///*��ȡջ�ĳ���*/
//int LS_Length(LinkStack* ls)
//{
//    // �������ﲹ����룬��ɱ�������
//    /********** Begin *********/
//    return ls->len;
//    /********** End **********/
//}
//
///*��x��ջ*/
//void LS_Push(LinkStack* ls, T x)
//{
//    // �������ﲹ����룬��ɱ�������
//    /********** Begin *********/
//    LNode P;
//    P.data = x;
//    P.next = ls->top;
//    ls->top = &P;
//    ls->len++;
//    /********** End **********/
//}
//
///*��ջ����ջԪ�ط���item�������ջ��������false*/
//bool LS_Pop(LinkStack* ls, T& item)
//{
//    // �������ﲹ����룬��ɱ�������
//    /********** Begin *********/
//    if (LS_IsEmpty(ls))
//    {
//        return false;
//    }
//    else
//    {
//        item = ls->top->data;
//        LNode* p = ls->top;
//        ls->top = p->next;
//        free(p);
//        ls->len--;
//
//        return true;
//    }
//    /********** End **********/
//}
//
///*��ջ��Ԫ�ط���item�������ջ��������false*/
//bool LS_Top(LinkStack* ls, T& item)
//{
//    // �������ﲹ����룬��ɱ�������
//    /********** Begin *********/
//    if (LS_IsEmpty(ls))
//    {
//        return false;
//    }
//    else
//    {
//        item = ls->top->data;
//
//        return true;
//    }
//    /********** End **********/
//}
//
///*��ջ����ջ�״�ӡ���������*/
//void LS_Print(LinkStack* ls)
//{
//    if (ls->len == 0) {
//        printf("The stack: Empty!");
//        return;
//    }
//    printf("The stack (from top to bottom):");
//    LNode* curr = ls->top;
//    while (curr) {
//        printf(" %d", curr->data);
//
//        curr = curr->next;
//    }
//    // printf("\n");
//}
