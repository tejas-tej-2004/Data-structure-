#include<iostream>
using namespace std;
struct Node 
{
int data;
Node *prev, *next;
};
Node* head = NULL;
void insert(int data, int pos)
{
Node* newNode = new Node{data, NULL, NULL};
if (pos == 1)
{
 newNode-> next = head;
 if(head)
 head-> prev = newNode;
 head = newNode;
 return;
 }
 Node*temp = head;
 for(int i=1;i<pos - 1 && temp; i++)
 temp = temp-> next;
 if(temp-> next)
 temp-> next -> prev = newNode;
 temp -> next = newNode;
 }
 void del(int pos)
 {
 if(head == NULL)
 return;
 Node* temp= head;
 if(pos ==1)
 {
 head = head->prev = NULL;
 delete temp;
 return;
 }
 for(int i=1;i<pos && temp; i++)
 temp = temp-> next;
 if(temp == NULL)
  return;
  temp-> prev-> next= temp-> next;
  if(temp->next)
  temp-> next-> prev = temp-> prev;
   delete temp;
   }
   void display()
   {
   Node* temp = head;
   while(temp)
   {
   cout<< temp-> data <<"";
   temp = temp-> next;
   }
   cout<< endl;
   }
   int main()
   {
   insert(10,1);
   insert(20,2);
   insert(30,3);
   display();
   insert(15,2);
   display();
   return 0;
   }
   
