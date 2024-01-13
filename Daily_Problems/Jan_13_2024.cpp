Node* curr = head_ref;
      while(curr!=NULL){
          Node* temp = curr->next;
          Node* min =curr;
          while(temp!=NULL){
              if(min->data>temp->data) min = temp;
              temp = temp->next;
      }
      int p=min->data;
      min->data=curr->data;
      curr->data=p;
      curr=curr->next;
    }
    return head_ref;
