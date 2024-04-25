//#define _CRT_SECURE_NO_WARNINGS 1
///*************************************************************
//	date: July 2017
//	copyright: Zhu En��ף����
//	DO NOT distribute this code.
//**************************************************************/
////˳��洢��ջ ʵ���ļ�
///////////////////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//#include "SeqStack.h"
//
///*����һ��ջ*/
//SeqStack* SS_Create(int maxlen)
//{
//	SeqStack* ss = (SeqStack*)malloc(sizeof(SeqStack));
//	ss->data = (T*)malloc(maxlen * sizeof(T));
//	ss->top = -1;
//	ss->max = maxlen;
//	return ss;
//}
//
///*�ͷ�һ��ջ*/
//void SS_Free(SeqStack* ss)
//{
//	free(ss->data);
//	free(ss);
//}
//
///*���һ��ջ*/
//void SS_MakeEmpty(SeqStack* ss)
//{
//	ss->top = -1;
//}
//
///*�ж�ջ�Ƿ�Ϊ��*/
//bool SS_IsFull(SeqStack* ss)
//{
//	/*����BEGIN��END֮��ʵ����Ĵ���*/
//	/*****BEGIN*****/
//	if (ss->top == ss->max - 1)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//	/******END******/
//}
//
///*�ж�ջ�Ƿ�Ϊ��*/
//bool SS_IsEmpty(SeqStack* ss)
//{
//	/*����BEGIN��END֮��ʵ����Ĵ���*/
//	/*****BEGIN*****/
//	if (ss->top == -1)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//	/******END******/
//}
//
///*��ȡջԪ�ظ���*/
//int SS_Length(SeqStack* ss)
//{
//	/*����BEGIN��END֮��ʵ����Ĵ���*/
//	/*****BEGIN*****/
//	return ss->top + 1;
//	/******END******/
//}
//
///*��x��ջ,��ջ���޷���ջ(����false)*/
//bool SS_Push(SeqStack* ss, T x)
//{
//	/*����BEGIN��END֮��ʵ����Ĵ���*/
//	/*****BEGIN*****/
//	if (SS_IsFull(ss))
//	{
//		return false;
//	}
//	else
//	{
//		ss->top += 1;
//		ss->data[ss->top] = x;
//
//		return true;
//	}
//	/******END******/
//}
//
///*��ջ����ջ��Ԫ�ط���item,��ջ�򷵻�false*/
//bool SS_Pop(SeqStack* ss, T& item)
//{
//	/*����BEGIN��END֮��ʵ����Ĵ���*/
//	/*****BEGIN*****/
//	if (SS_IsEmpty(ss))
//	{
//		return false;
//	}
//	else
//	{
//		item = ss->data[ss->top];
//		ss->top--;
//
//		return true;
//	}
//	/******END******/
//}
//
///*��ȡջ��Ԫ�ط���item��,��ջ�򷵻�false*/
//bool SS_Top(SeqStack* ss, T& item)
//{
//	if (SS_IsEmpty(ss)) {
//		return false;
//	}
//	item = ss->data[ss->top];
//	return true;
//}
//
///*��ջ�׵�ջ����ӡ������Ԫ��*/
//void SS_Print(SeqStack* ss)
//{
//	if (SS_IsEmpty(ss)) {
//		printf("stack data: Empty!\n");
//		return;
//	}
//	printf("stack data (from bottom to top):");
//	int curr = 0;
//	while (curr <= ss->top) {
//		printf(" %d", ss->data[curr]);
//		curr++;
//	}
//	//printf("\n");
//}
