//#define _CRT_SECURE_NO_WARNINGS 1
//
///*�ϲ�����*/
//#include <iostream>
//
//using namespace std;
//
//typedef struct node //����ڵ����ݽṹ
//{
//    int d;
//    struct node* next;
//}node;
//
//node* initnode()
//{
//    node* p = new node;
//    p->d = 0;
//    p->next = NULL;
//
//    return p;
//}
//
//void prtList(node* head) //���������ʾ��������
//{
//    cout << "��ǰ���������Ϊ��";
//    while (head != NULL)
//    {
//        cout << head->d << ' ';
//        head = head->next;
//    }
//    cout << endl;
//}
//
//node* combineList(node* AH, node* BH) //����ϲ�����  
//{
//    node* ch = BH;
//
//    node* cur_a = AH;
//    node* tail_a = AH->next;
//    node* cur_b = BH;
//    node* tail_b = BH->next;
//
//    while (cur_a)
//    {
//        if (cur_b->next == NULL)
//        {
//            cur_b->next = cur_a;
//            break;
//        }
//
//        else if (cur_b->d >= cur_a->d && tail_b->d <= cur_a->d)
//        {
//            cur_a->next = tail_b;
//            cur_b->next = cur_a;
//
//            cur_a = tail_a;
//            tail_a = tail_a->next;
//
//            cur_b = cur_b->next;
//            //prtList(ch);
//        }
//
//        else if (tail_b->d > cur_a->d)
//        {
//            //prtList(ch);
//            cur_b = cur_b->next;
//            tail_b = tail_b->next;
//        }
//    }
//
//
//    return ch;
//}
//
//int main()
//{
//    node* p, * AH = NULL, * BH = NULL, * CH = NULL;
//
//    int K = 10, i;
//    for (i = 1; i <= K; i = i + 2)   //��������ʼ��һ������ΪK������������������Ȼ��
//    {
//        p = new node;
//        p->d = i;
//
//        p->next = AH; //ͷ�巨��ѭ������
//        AH = p;
//    }
//
//
//    for (i = 2; i <= K + 5; i = i + 4)   //��������ʼ��һ������ΪK������������������Ȼ��
//    {
//        p = new node;
//        p->d = i;
//
//        p->next = BH; //ͷ�巨
//        BH = p;
//    }
//    cout << "�ϲ�ǰA����" << endl;
//    prtList(AH);  //��ʾ����1�ĵ�ǰֵ
//    cout << "�ϲ�ǰB����" << endl;
//    prtList(BH);  //��ʾ����2�ĵ�ǰֵ
//
//    CH = combineList(AH, BH);
//
//    cout << "�ϲ���" << endl;
//    prtList(CH);
//}


///*�������Ա�*/
//#include <iostream>
//
//using namespace std;
//
//typedef struct node  //����ڵ����ݽṹ
//{
//    int d;
//    struct node* next;
//};
//
//void prtList(node* head) //���������ʾ��������
//{
//    while (head != NULL)
//    {
//        cout << head->d << ' ';
//        head = head->next;
//    }
//    cout << endl;
//}
//
//node* invertList(node* head) //������ת����ĺ���������Ҫ��ɵ���ҵ
//{
//    //��ͬѧ��������д���룬�����headΪͷָ����������������
//    node* pre = head;
//    node* cur = pre->next;
//    node* tail = cur->next;
//
//    head->next = NULL;
//
//    while (cur)
//    {
//        cur->next = pre;
//        pre = cur;
//        cur = tail;
//        if (tail != NULL)
//        {
//            tail = tail->next;
//        }
//    }
//    return pre;
//}
//
////node* invertList(node* head)
////{
////    node* pre = NULL;
////    node* cur = head;
////
////    while (cur != NULL)
////    {
////        node* nextNode = cur->next;
////        cur->next = pre;
////        pre = cur;
////        cur = nextNode;
////    }
////
////    return pre;
////}
//
//
//int main()
//{
//    node* p, * head = NULL, * newHead;
//
//    int K = 10, i;
//    for (i = 1; i < K; i++)   //��������ʼ��һ������ΪK������������������Ȼ��
//    {
//        p = new node;
//        p->d = i;
//
//        p->next = head; //ͷ�巨
//        head = p;
//    }
//
//    prtList(head);  //��ʾ����ĵ�ǰֵ
//
//    newHead = invertList(head);
//
//    prtList(newHead);  //��ʾ����ĵ�ǰֵ
//}