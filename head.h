#ifndef __HEAD_H__
#define __HEAD_H__

typedef char datatype;
typedef struct Node
{
    datatype data;
    struct Node *left;
    struct Node *right;
}Node,*biTree;

biTree create();
void pri_order(biTree T);
void in_order(biTree T);
void post_order(biTree T);


#endif