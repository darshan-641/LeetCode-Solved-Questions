class MyQueue {
    
    stack<int> s1, s2;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        
        if( s2.empty()){
            
            while( !s1.empty()){
                
                int num = s1.top();
                s1.pop();
                s2.push(num);
                
            }
            
            int rem = s2.top();
            s2.pop();
            
            return rem;
        }
        else{
//             if not empty
            
            int rem = s2.top();
            s2.pop();
            return rem;
            
        }
    }
    
    int peek() {
        
        if( s2.empty()){
          
            while( !s1.empty()){
                
                int num = s1.top();
                s1.pop();
                s2.push(num);
                
            }
            
            return s2.top();
            
        }
        else{
            
            return s2.top();
        }
    }
    
    bool empty() {
        
        if( s1.empty()  && s2.empty()){
            
            return true;
        }
        else return false;
    }
    
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */