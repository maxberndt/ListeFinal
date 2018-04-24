#include <stdio.h>
#include <stdlib.h>
#include "header.h"

SLIST_HEADER * createSList (void) {
    SLIST_HEADER * p;
    p = malloc (sizeof(SLIST_HEADER));
    if(p != NULL) {
        p-> Len = 0;
        p-> First = NULL;
        p-> Last = NULL;
    }
    return p;
}


SLIST * insertFirst(SLIST_HEADER *myList, int data){
    SLIST * pnew;
    if(myList -> Len == 0){
        pnew = malloc (sizeof(SLIST));
        if(NULL != pnew){
            pnew->Next=NULL;
            pnew->Data = data;
            myList->First = pnew;
            myList->Last = pnew;
            myList->Len = 1;
        }
    }
    else {
        pnew = malloc (sizeof(SLIST));
        if(NULL != pnew){
            pnew->Next=myList->First;
            pnew->Data = data;
            myList->First = pnew;
            myList->Len++ ;
        }
    }
    
    return pnew;
}


void pr_List (SLIST_HEADER *mylist){
    int i;
    SLIST * tmp = mylist -> First;
    for (i = 0; i < mylist -> Len; i ++){
        printf("%d\n", tmp -> Data);
        tmp = tmp -> Next;
    }
}
