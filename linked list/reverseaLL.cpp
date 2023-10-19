#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
  
    node* reverse(node *head){
        if(head==NULL || head->next==NULL){
             return head;
        }
        node* prev=NULL;
        node* curr=head;
        node* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            // forward=curr;
        }
        return prev;

    }
};

int main(){


   return 0; 
}

      
