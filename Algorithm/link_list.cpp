//
//  main.cpp
//  数据结构第三题
//
//  Created by WangQL on 10/29/13.
//  Copyright (c) 2013 WangQL. All rights reserved.
//

#include <iostream>
#define LEN sizeof(struct list)

using namespace std;

struct list{
    int data;
    struct list *next;
};

struct list *creat(void);                     //创建链表
struct list *tail(struct list *x, int num);            //尾部插入结点
struct list *head(struct list *x);            //头部插入结点
void GetTail(struct list *x);                 //得到最后一个结点
void GetHead(struct list *x);                 //得到第一个结点
void display(struct list *x);                //遍历
int countlist(struct list *x);                   //计算结点个数
struct list *insert(struct list *x,int y,int z);//特定位置插入
int listmax(struct list *x);                     //最大值
int listmin(struct list *x);                     //最小值

//主函数**************************************
int main()
{
    struct list *x;
    int num;
    int a,b;
    int lar,sma;
    x=creat();
    display(x);
    x=tail(x, 999);
    display(x);
    x=tail(x, 888);
    display(x);
    //x=head(x);
    //display(x);
    //GetTail(x);
    //GetHead(x);
    //num=countlist(x);
    //cout<<"the number of the node:"<<num<<endl;
    //cout<<"place"<<endl;
    //cin>>a;
    //cout<<"the data:"<<endl;
    //cin>>b;
    //x=insert(x,a,b);
    //display(x);
    lar=listmax(x);
    sma=listmin(x);
    cout<<"max:"<<lar<<endl<<"min:"<<sma<<endl;
}

//创建链表************************************
struct list *creat(void)
{
    struct list *head,*p1,*p2;
    head=p1=p2=(struct list *)malloc(LEN);
    cin>>p1->data;
    while (p1->data) {
        p2->next=p1;
        p2=p1;
        p1=(struct list *)malloc(LEN);
        cin>>p1->data;
    }
    p2->next=NULL;
    return head;
}

//遍历***************************************
void display(struct list *x)
{
    struct list *p;
    p=x;
    while (p->next) {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<p->data<<endl;
}

//尾部插入结点********************************
struct list *tail(struct list *x, int num)
{
    struct list *p,*n;
    p=x;
    cout<<"put the new node to the tail"<<endl;
    n=(struct list *)malloc(LEN);
    cin>>n->data;
    while (p->next) {
        p=p->next;
    }
    p->next=n;
    n->data=num;
    n->next=NULL;
    return x;
}

//头部插入结点********************************
struct list *head(struct list *x)
{
    struct list *n;
    cout<<"put the new node to the head"<<endl;
    n=(struct list *)malloc(LEN);
    cin>>n->data;
    n->next=x;
    return n;
}

//得到最后一个结点****************************
void GetTail(struct list *x)
{
    struct list *p;
    p=x;
    while(p->next) {
        p=p->next;
    }
    cout<<"the last node is "<<p->data<<endl;;
}

//得到第一个结点******************************
void GetHead(struct list *x)
{
    cout<<"the first node is "<<x->data<<endl;;
}

//计算结点个数********************************
int countlist(struct list *x)
{
    struct list *p;
    int a=0;
    p=x;
    do {
        if (p->next==NULL) {
            cout<<"no node"<<endl;
            a--;
            break;
        }
        a++;
        p=p->next;
    } while (p->next);
    return ++a;
}

//特定位置插入结点*****************************
struct list *insert(struct list *x,int y,int z)
{
    struct list *p,*q,*n;
    int a=1,node;
    n=(struct list *)malloc(LEN);
    n->data=z;
    n->next=NULL;
    p=x;
    node=countlist(x);
    if (y>node) {
        cout<<"error"<<endl;
    }else{
        if (y==1) {
            n->next=x;
            x=n;
        }else{
        for (a++; a<y; a++) {
            p=p->next;
        }
        q=p;
        q=q->next;
        p->next=n;
        n->next=q;
        }
    }
    return x;
}

//最大值
int listmax(struct list *x)
{
    struct list *p;
    int m;
    p=x;
    m=p->data;
    while (p->next) {
        if (p->data>m) {
            m=p->data;
        }
        p=p->next;
    }
    if (p->data>m) {
        m=p->data;
    }
    return m;
}

//最小值
int listmin(struct list *x)
{
    struct list *p;
    int m;
    p=x;
    m=p->data;
    while (p->next) {
        if (p->data<m) {
            m=p->data;
        }
        p=p->next;
    }
    if (p->data<m) {
        m=p->data;
    }
    return m;
}