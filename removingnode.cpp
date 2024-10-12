
struct Node {
    int data;         
    Node* next;        
};


void removeNode(Node*& head, int valueToRemove) {
   
    if (head == nullptr) {
        return;
    }

   
    if (head->data == valueToRemove) {
        Node* oldHead = head;
        head = head->next;
        delete oldHead;
        return;
    }

    
    Node* current = head;
    Node* previous = nullptr;

   
    while (current != nullptr && current->data != valueToRemove) {
        previous = current;
        current = current->next;
    }

  
    if (current != nullptr) {
      
        previous->next = current->next;
       
        delete current;
    }
}
