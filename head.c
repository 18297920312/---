#include<stdio.h>
#include<stdlib.h>
#include"head.h"

biTree create()
{
    datatype val;
    scanf(" %c",&val);
    if(val == '#')
    {
        return NULL;
    }
    biTree T = (biTree)malloc(sizeof(Node));
    if(NULL == T)
    {
        printf("create失败..\n");
        return NULL;
    }
    T->data = val;
    T->left = create();
    T->right = create();
    return T;
}

void pri_order(biTree T)
{
    if(NULL == NULL)
    {
        return;
    }
    printf("%c\t",T->data);

    pri_order(T->left);
    pri_order(T->right);
}

void in_order(biTree T)
{
    if(NULL == NULL)
    {
        return;
    }

    pri_order(T->left);
    printf("%c\t",T->data);
    pri_order(T->right);
}

void post_order(biTree T)
{
    if(NULL == NULL)
    {
        return;
    }

    pri_order(T->left);
    pri_order(T->right);
    printf("%c\t",T->data);
}

