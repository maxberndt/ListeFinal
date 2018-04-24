#include <stdio.h>
#include "header.h"

int main() {
    SLIST_HEADER *root;
    int i;
    
    root = createSList();
    if ( NULL == root ) return -1;
    for (i=1;i<5;i++)
        insertFirst(root, i);
    pr_List(root);
    
}
