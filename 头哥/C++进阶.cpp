#define _CRT_SECURE_NO_WARNINGS 1

///*C++����*/
//#include<iostream>
//using namespace std;
//
//float sum(float a = 0.0, float b = 10.0, float c = 10.0)
//{
//	return a + b + c;
//}
//
//int main(int argc, char* argv[])
//{
//	float a, b, c;
//	cin >> a >> b >> c;
//	cout << sum(a) << ' ' << sum(a, b) << ' ' << sum(a, b, c) << endl;
//	return 0;
//}


///*���ֽ���*/
//#include<iostream>
//using namespace std;
//
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	return;
//}
//
//int main(int argc, char* argv[])
//{
//	int a, b;
//	cin >> a >> b;
//	int& c = a, & d = b;
//	swap(c, d);
//	cout << a << ',' << b << endl;
//	return 0;
//}

///*ģ�庯��,���ͱ��*/
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//template <typename T>
//void sort(T p[], int n)
//{
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n - 1; j++)
//        {
//            if (p[j] > p[j + 1])
//            {
//                T temp = p[j];
//                p[j] = p[j + 1];
//                p[j + 1] = temp;
//            }
//        }
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        cout << p[i];
//        if (i != n - 1)
//        {
//            cout << ',';
//        }
//    }
//    cout << endl;
//}
//
//int main(int argc, char* argv[])
//{
//    int n = 0;
//    cin >> n;
//    int* x = new int[n];
//    float* y = new float[n];
//
//    for (int i = 0; i < n; i++)
//        cin >> x[i];
//    for (int i = 0; i < n; i++)
//        cin >> y[i];
//    sort(x, n);
//    sort(y, n);
//
//    delete(x);
//    delete(y);
//
//    return 0;
//}



///*������*/
//#include <iostream>
//using namespace std;
//
///********* Begin *********/
////�ڴ˴�ʵ��һ��������
//class Car
//{
//public:
//    string door;
//    string light;
//    int speed;
//
//    //���캯��
//    Car()
//    {
//        door = "OFF";
//        light = "OFF";
//        speed = 0;
//    }
//
//
//    //���� 1 �� 2 ��//���� 3 �� 4 ��//�ٶ� 5 ���� 6 ����
//    void change(int d);
//    void prin()
//    {
//        cout << "���� " << door << endl;
//        cout << "���� " << light << endl;
//        cout << "�ٶ� " << speed << endl;
//    }
//};
///********* End *********/
//
//void Car::change(int d)
//{
//    if (d == 1)
//    {
//        door = "ON";
//    }
//    else if (d == 2)
//    {
//        door = "OFF";
//    }
//
//    if (d == 3)
//    {
//        light = "ON";
//    }
//    else if (d == 4)
//    {
//        light = "OFF";
//    }
//
//    if (d == 6 && speed >= 10)
//    {
//        speed -= 10;
//    }
//    else if (d == 5)
//    {
//        speed += 10;
//    }
//
//}
//
//
//int main()
//{
//    /********* Begin *********/
//    //�ڴ˴�����ִ���������������״̬
//    char cmds[25];
//    for (int i = 0; i < 25; i++)
//    {
//        cmds[i] = '\0';
//    }
//    cin >> cmds;
//
//
//    Car car;
//
//    int i = 0;
//    while (cmds[i] != '\0')
//    {
//        int ab = (int)(cmds[i] - '0');
//
//        car.change(ab);
//        i ++;
//    }
//
//    car.prin();
//
//    /********* End *********/
//}


///*ϡ������*/
//#include <cstdlib>
//#include<iostream>
//using namespace std;
//
////VecΪ����������������
//struct Vec {
//    int val;
//    int pos;
//    struct Vec* next;
//};
//
//Vec* Create();
//void Init(Vec* V, int d);//d��Ҫ�����Ľڵ����
//void Insert(Vec* V, int _val, int _pos);
//void Destroy(Vec* V);
//int Multiply(Vec* V1, Vec* V2);
//
//void show(Vec* V)
//{
//    Vec* p = V;
//    while (p->next)
//    {
//        p = p->next;
//        cout << "V->pos: " << p->pos << endl;
//        cout << "V->val: " << p->val << endl;
//        cout << endl;
//    }
//}
//
//int main() {//�������
//    Vec* V1 = Create();
//    Vec* V2 = Create();
//    int d1 = 0;
//    scanf("%d ", &d1);
//    Init(V1,d1);
//    //show(V1);
//    int d2 = 0;
//    scanf("%d ", &d2);
//    Init(V2, d2);
//    //show(V2);
//    printf("%d\n", Multiply(V1, V2));
//    //Destroy(V1);
//    //Destroy(V2);
//
//
//
//    return 0;
//}
//
//Vec* Create() {
//    Vec* V = new Vec; //ͷ���
//    V->next = NULL;
//    V->pos = -1;
//    V->val = 0;
//
//    return V;
//}
//void Init(Vec* V, int d) {
//    if (d != 0)
//    {
//        int val = 0;
//        Vec* now = V;
//        for (int i = 0; i < d; i++) {
//            scanf("%d ", &val);
//            if (val != 0) { //������Ԫ�ط��뵽�´����Ľ���У�Ȼ����뵽��������
//                //�����½ڵ�
//                Vec* p = new Vec;
//                //�ڵ㸳ֵ
//                p->pos = i;
//                p->val = val;
//                //�ڵ�β�巨
//                //printf("\n%p\n", now);
//                p->next = now->next;
//                now->next = p;
//                //ָ�����
//                now = now->next;
//            }
//            else
//            {
//                i = i - 1;
//                d = d - 1;
//            }
//        }
//    }
//    else
//    {
//        return;
//    }
//}
//void Insert(Vec* V, int p, int q) { //�����q���뵽������V��p����
//    ////��p ��q �ǽڵ�ʱ
//    //if (q->val != 0)
//    //{
//    //    //��ȡ�ڵ�ı��
//    //    int num = p->pos + 1;
//    //    //��V�ж�λ�ñ�ŵĵ�ַ
//    //    int i = 0;
//    //    Vec* now = V;
//    //    for (i = 0; i < num; i++)
//    //    {
//    //        now = now->next;
//    //    }
//    //    //��q����
//    //    q->next = now->next;
//    //    now->next = q;
//    //}
//    //else
//    //{
//    //    return;
//    //}
//
//
//
//    //�� p ��q ������ʱ
//    if (q != 0)
//    {
//        //��ȡ�ڵ�ı��
//        int num = p + 1;
//        //��V�ж�λ�ñ�ŵĵ�ַ
//        int i = 0;
//        Vec* now = V;
//        for (i = 0; i < num; i++)
//        {
//            now = now->next;
//        }
//
//        //����һ����ֵΪ q �Ľڵ�
//        Vec* q_in = new Vec;
//        q_in->val = q;
//        //��q����
//        q_in->next = now->next;
//        now->next = q_in;
//    }
//    else
//    {
//        return;
//    }
//}
//void Destroy(Vec* V) { //�ݻٵ�����V
//    Vec* now = V->next;
//    Vec* pre = V;
//    free(pre);
//    while (pre != NULL) {//�벹��
//        pre = now;
//        if (now->next != NULL)
//        {
//            now = now->next;
//        }
//        free(pre);
//    }
//}
//
//int Multiply(Vec* V1, Vec* V2) {//�벹��
//    int total = 0;
//    Vec* p1 = V1->next, * p2 = V2->next;
//    
//    while (p1 != NULL && p2 != NULL)
//    {
//        total += (p1->val) * (p2->val);
//        p1 = p1->next;
//        p2 = p2->next;
//    }
//
//    return total;
//}