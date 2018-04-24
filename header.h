// File: list.h

struct SList {
    int  Data;
    struct SList *Next;
};
typedef struct SList  SLIST;


/* -- Ein Kopf-Knoten, der die Listenl nge enth lt */
struct SList_Header {
    int Len;
    SLIST *First, *Last;
};
typedef struct SList_Header SLIST_HEADER;


SLIST_HEADER *createSList(void);
SLIST *insertFirst(SLIST_HEADER*,int );
