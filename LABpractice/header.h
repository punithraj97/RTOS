#include<stdio.h>
#include<stdlib.h>
#define SUCCESS 1
#define FAIL 0
#define KEYSIZE 26

typedef struct _node_
{
    char name[20];
    int age;
    char phone_number[20];
    struct _node_ *ptr;
}NODE;

typedef struct _hash_
{

NODE *head,*tail;
int count;

}HASH;


HASH* initialize(int);
int insert(HASH*,char*,int,char*);
int search(HASH*,char*);
void display(HASH*);



