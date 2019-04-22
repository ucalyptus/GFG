#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;

};


void push(struct Node** head,int new_data){
struct Node* node = (struct Node*)malloc(sizeof(struct Node));
node->data = new_data;
node->next = (*head);
(*head) = node;
}

void storeEle(struct Node* head1,struct Node* head2,unordered_map<int,int> &ddd){
	struct Node* ptr1 = head1;
	struct Node* ptr2 = head2;

	while(ptr1 != NULL || ptr2!=NULL)
	{
		if(ptr1!=NULL){
		ddd[ptr1->data]++;

		}
		if(ptr2!=NULL){
		ddd[ptr2->data]++;
		}


	}


}

struct Node *unio(unordered_map<int,int> ddd){
	struct Node* result = NULL;

	for(auto it = ddd.begin();it!= ddd.end();it++)
	push(&result,it->first);

	return result;
	
}

struct Node *inters(unordered_map<int,int> ddd){
	struct Node* result = NULL;

	for(auto it = ddd.begin();it!= ddd.end();it++)
	if(it->second==2)
	push(&result,it->first);

	return result;
	

}

void printList(struct Node* node){
	while(node!=NULL){
		cout<<node->data;
		node = node->next;
	}
}

void unionintersec(struct Node* head1,struct Node* head2){
	unordered_map<int,int> ele;
	storeEle(head1,head2,ele);

	Node* interseclist = inters(ele);
	Node* unionlist = unio(ele);

	printList(interseclist);
	printList(unionlist);
}




int main(){
	struct Node* head1 = NULL;
	struct Node* head2 = NULL;

	push(&head1, 1); 
    push(&head1, 2); 
    push(&head1, 3); 
    push(&head1, 4); 
    push(&head1, 5); 

	push(&head2, 1); 
    push(&head2, 5); 
    push(&head2, 9); 
    push(&head2, 8); 
   
    unionintersec(head1, head2);  
	return 0;
}

