#ifndef LIST
#define LIST

typedef struct _ListNode
{
	char *tipo;
	char *identificador;
	int preenchido;
	void *valor;
	/*char *escopo*/
	
	struct _ListNode *next;
	struct _ListNode *prev;
} ListNode;

typedef struct _List
{
	ListNode *head;
	ListNode *tail;
} List;

extern int inserirElemento(List *list, char *identificador);
extern void alterarElemento(List *list, ListNode *node);
extern ListNode* procuraElemento(List *list, char *identificador);
extern void printList(List *list);

#endif
