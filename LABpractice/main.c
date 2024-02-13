#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include<assert.h>

int main()
{
      HASH *test;
       test=initialize(KEYSIZE);
     for(int i=0;i<KEYSIZE;i++)
    {
        assert((test+i)->head==NULL && (test+i)->tail==NULL);
        assert((test+i)->count==0);
        }
      assert(insert(test,"punith",25,"9880780485"));
      assert(insert(test,"deepak",24,"9880780481"));
       assert(insert(test,"adarsh",24,"9880780482"));
        assert(insert(test,"sudeep",23,"9880780483"));
        assert(insert(test,"varun",22,"9880780484"));
        assert(insert(test,"sagar",24,"9880780486"));
        assert(insert(test,"dhanush",24,"9880780487"));
        assert(insert(test,"darshan",28,"9880780488"));
        assert(insert(test,"dhruva",24,"9880780489"));
        assert(insert(test,"shiva",22,"9880780480"));

        display(test);
    return 0;
}
