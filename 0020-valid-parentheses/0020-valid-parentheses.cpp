class Solution {
public:
    struct Node{
        char data;
        Node* next;
        Node(char data) : data(data), next(nullptr){}
    };

    class Stack{
        Node* top;
        public:
        Stack() : top(nullptr){}
        ~Stack(){
            while(!isEmpty()){
                pop();
            }
        }

        bool isEmpty(){
            return top == nullptr;
        }

        char topp(){
            if(!isEmpty()) return top->data;
            return '\0';
        }

        void push(char d){
            Node* newNode = new Node(d);
            if(isEmpty()){
                top = newNode;
                return;
            }
            newNode->next = top;
            top = newNode;
        }
        void pop(){
            if(isEmpty()){
                return;    
            }
            Node* temp = top;
            top = top->next;
            temp->next = nullptr;
            delete temp;
        }
    };
    bool isValid(string s) {
        Stack t;
        for(char c : s){
            if((t.topp() == '(' && c == ')') || (t.topp() == '{' && c == '}') || (t.topp() == '[' && c == ']')){
               t.pop(); 
            }
            else{
                t.push(c);
            }
            
        }
        return t.isEmpty();
    }
};