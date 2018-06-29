//
//  main.c
//  评分系统
//
//  Created by 冯佩玲 on 18/6/27.
//  Copyright © 2018年 冯佩玲. All rights reserved.
//

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct competitor
{
    char name[20];
    char sex[3];
    int studentID;
    int score;
    int datebirth;
    int class;
    char str[10];
    int phonenumber;
    struct competitor *next;
};
typedef struct node {
    int data;
    struct node *next;
}node;


node *createlink()//从文件中读取数据存入链表
{
    node *head =(node*)malloc(sizeof(node));
    int t;
    node *p;
    node *q;
    p=q=head;
    FILE * r= fopen("input.txt","r");
    if(r==NULL)
    {
        printf("打开文件失败!");
        return NULL;
    }
    
    while(fscanf(r,"%d",&t)!=EOF)
    {
        q= (node*)malloc(sizeof(node));
        q->data=t;
        p->next=q;
        p=q;
    }
    p->next=NULL;
    return head;
}
int main()
{
    int i;
    
    
}
    

