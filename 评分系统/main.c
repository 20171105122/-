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
    char judge;
    int phonenumber;
    struct competitor *next;
};


    
    

