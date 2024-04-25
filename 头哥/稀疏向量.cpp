//#define _CRT_SECURE_NO_WARNINGS 1
//
//#define DBUG01
////#define DBUG02
//
//#include<stdlib.h>
//#include<stdio.h>
//
//#ifdef DBUG01
//
//#include<iostream>
//using namespace std;
//
//#endif
//
//int i = 0;
//
////VecΪ����������������
//struct Vec {
//    int val;
//    int pos;
//    Vec* next;
//};
//
//Vec* Create();
//void Init(Vec* V, int d);
//void Insert(Vec* V, int _pos, Vec* q);
//void Destroy(Vec* V);
//int Multiply(Vec* V1, Vec* V2);
//
//#ifdef DBUG01
//
//void show(Vec* V)
//{
//    Vec* p = V;
//    while (p)
//    {
//        cout << "pos:" << p->pos;
//        cout << " val:" << p->val << endl << endl;
//        p = p->next;
//    }
//}
//
//#endif
//
//int main() {//�������
//    Vec* V1 = Create();
//    Vec* V2 = Create();
//    int d1 = 0;
//    scanf("%d", &d1);//d1�ǽڵ�����a
//    Init(V1, d1);
//
//    //show(V1);
//
//    int d2 = 0;
//    scanf("%d", &d2);//d2�ǽڵ�����
//    Init(V2, d2);
//
//    //show(V2);
//
//    printf("%d\n", Multiply(V1, V2));
//    Destroy(V1);
//    //printf("\nd2 beginning\n");
//    Destroy(V2);
//
//    //printf("V1 = %d, V2 = %d", V1->val, V2->val);
//
//#ifdef DBUG02
//
//    cout << "have destoried" << endl;
//    if(V1 != NULL)
//        show(V1);
//    if (V2 != NULL)
//        show(V2);
//
//
//#endif
//
//    return 0;
//}
//
//
//Vec* Create() {
//    Vec* V = new Vec; //ͷ���
//    V->next = NULL;
//    V->pos = 0;
//    V->val = 0;
//
//    return V;
//}
//
//void Init(Vec* V, int d) {
//    int val = 0;
//    int pos = 1;
//    Vec* now = V;//now��ָ��ǰ�ڵ��ָ��
//    for (i = 0; i < d; i++) {
//        scanf("%d", &val);
//        //������Ԫ�ط��뵽�´����Ľ���У�Ȼ����뵽��������
//            Vec* p = Create();
//            p->val = val;
//            p->pos = pos;
//            p->next = now->next;
//            now->next = p;
//
//            now = p;
//            pos++;
//            V->val++;
//    }
//}
//void Insert(Vec* V, int p, Vec* q) { //�����q���뵽������V��p����
//    Vec* now = V;
//    for (i = 0; i <= p && now->pos != p; i++)
//    {
//        now = now->next;
//    }
//
//    q->next = now->next;
//    now->next = q;
//
//    V->val++;
//
//    return;
//}
//
//void Destroy(Vec *V) { //�ݻٵ�����V
//    Vec* pre = V;
//    while (pre->next)
//    {
//        //printf("%d ", pre->pos);
//
//        if (pre->next)
//        {
//            Vec* now = pre;
//            pre = pre->next;
//            delete now;
//        }
//        else
//        {
//            delete pre;
//        }
//    }
//}
//
//int Multiply(Vec* V1, Vec* V2) {//�벹��
//
//    if (V1->val == V2->val)
//    {
//        int total = 0;
//
//        Vec* p1 = V1; int n1 = p1->val;
//        Vec* p2 = V2; int n2 = p2->val;
//
//        p1 = p1->next; p2 = p2->next;
//
//        for (i = 0; i < n1 && i < n2; i++)
//        {
//            total += (p1->val) * (p2->val);
//            p1 = p1->next;
//            p2 = p2->next;
//        }
//
//        return total;
//    }
//    else
//    {
//        return -1;
//    }
//}
