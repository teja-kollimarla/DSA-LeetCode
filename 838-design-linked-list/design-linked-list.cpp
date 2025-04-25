class Node{
    public:
        int data ;
        Node* next;
        Node(int val){
            data=val;
            next=NULL;
        }
};

class MyLinkedList {
public:
    Node* head;
    int length;
    MyLinkedList() {
        head=NULL;
        length=0;
    }
    int get(int index) {
        if(!head) return -1; 
        if(index<0 || index>=length) return -1;
        Node* t=head;
        for(int i=0;i<index;i++){
           t=t->next;
        //    cout<<t->data<<" ";
        }
        return t->data;
        // return -1;
    }
    
    void addAtHead(int val) {
        if(head==NULL){
            Node* temp= new Node(val);
            head=temp;
            length++;
            return;
        }
        else{
            Node* temp=new Node(val);
            temp->next=head;
            head=temp;
            length++;
            return;
        }
    }
    
    void addAtTail(int val) {
        if(head==NULL){
            addAtHead(val);
            return;
        }
        Node* start=head;
        Node* temp=new Node(val);
        while(start->next!=NULL){
            start=start->next;
        }
        start->next=temp;
        length++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>length){
            return;
        }
        if(index==0){
            addAtHead(val);
            return;
        }
        if(index==length){
            addAtTail(val);
            return;
        }
        Node* temp=new Node(val);
        Node* prev=head;
        Node* curr=head;
        for(int j=0;j<index;j++){
            prev=curr;
            curr=curr->next;
        }
        temp->next=curr;
        prev->next=temp;
        length++;
    }
    
    void deleteAtIndex(int index) {
        if(head==NULL||(index<0 || index>=length)){
            return;
        }
        Node* current=head;
        if(index==0){
           head=head->next;
            delete current;
            length--;
            return;
        }
        
        // if(length==1 && index==0){
        //     length--;
        //     delete current;
        //     head=NULL;
        //     return;
        // }
        // if(length==1 && index!=0){
        //     return;
        // }
        Node* prev=head;
        for(int j=0;j<index;j++){
            prev=current;
            current=current->next;
            
        }
        prev->next=current->next;
        // if(current->next!=NULL)
        //     prev->next=current->next;
        // else{
        //     prev->next=NULL;
        // }
        delete current;
        length--;
        
    }
};



/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */