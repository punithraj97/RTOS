#include<stdio.h>
#include<stdlib.h>
#include "header.h"




HASH* initialize(int keysize)
{
    HASH *test;
    test=(HASH*)malloc(sizeof(HASH) *keysize);

    for(int i=0;i<keysize;i++)
    {
        (test+i)->head=(test+i)->tail=NULL;
        (test+i)->count=0;
        }
        return test;
}

NODE* getnode(char name[],int age,char phonenumber[])
{
    NODE *newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->age=age;
    strcpy((newnode->name),name);
    strcpy((newnode->phone_number),phonenumber);
    newnode->ptr=NULL;
    return newnode;
}
int insert(HASH  *test,char name[],int age,char phonenumber[])
{
    char w=*(name+0);
    w=toupper(w);
    int key=(w%KEYSIZE);
  NODE *newnode;
  newnode=getnode(name,age,phonenumber);
  if((test+key)->count==0)
  {
    (test+key)->head= (test+key)->tail=newnode;
    (test+key)->count++;
    return SUCCESS;
  }

  else
    {

    (test+key)->tail->ptr=newnode;
       (test+key)->tail=newnode;
       (test+key)->count++;
        return SUCCESS;
  }


}
int search(HASH *test,char name[])
{

}
void display(HASH *test)
{
    NODE *temp;
    for(int i=0;i<KEYSIZE;i++)
    {
        printf("The key index is=%d\n\n",i);
        temp=(test+i)->head;
        while(temp!=NULL)
        {
            printf("the name of the student=%s\n",temp->name);
            printf("the age of the student=%d\n",temp->age);
            printf("the phone_number of the student=%s\n\n",temp->phone_number);

            temp=temp->ptr;
}
}
}

