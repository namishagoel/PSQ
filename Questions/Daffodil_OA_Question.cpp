#include <bits/stdc++.h>
using namespace std;
class LNode
{
	public:
	int data;
	LNode* next;
};

class TNode
{
	public:
	int data;
	TNode* left;
	TNode* right;
};

TNode* newNode(int data);
int countLNodes(LNode *head);
TNode* sortedListToBSTRecur(LNode **head_ref, int n);

TNode* sortedListToBST(LNode *head)
{
	int n = countLNodes(head);
	return sortedListToBSTRecur(&head, n);
}
TNode* sortedListToBSTRecur(LNode **head_ref, int n)
{
	if (n <= 0)
		return NULL;
	TNode *left = sortedListToBSTRecur(head_ref, n/2);
	TNode *root = newNode((*head_ref)->data);
	root->left = left;
	*head_ref = (*head_ref)->next;
	root->right = sortedListToBSTRecur(head_ref, n - n / 2 - 1);
	return root;
}

int countLNodes(LNode *head)
{
	int count = 0;
	LNode *temp = head;
	while(temp)
	{
		temp = temp->next;
		count++;
	}
	return count;
}

void push(LNode** head_ref, int new_data)
{
	LNode* new_node = new LNode();

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void printList(LNode *node)
{
	while(node!=NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}

TNode* newNode(int data)
{
	TNode* node = new TNode();
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}

void preOrder(TNode* node)
{
	if (node == NULL)
		return;
	cout<<node->data<<" ";
	preOrder(node->left);
	preOrder(node->right);
}

int main()
{
	LNode* head = NULL;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=n-1; i>=0; i--)
    {
        push(&head, arr[i]);
    }
	TNode *root = sortedListToBST(head);
	preOrder(root);
	return 0;
}