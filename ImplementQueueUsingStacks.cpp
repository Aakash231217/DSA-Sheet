class MyQueue {
    stack<int>s;
    stack<int>p;
public:
    MyQueue() {

        
    }
    
    void push(int x) {
        s.push(x);
    }
    void exchange(){
        while(!s.empty()){
            p.push(s.top());
            s.pop();
        }
    }
    
    int pop() {
           int n;
           if(p.empty()) exchange();
           n=p.top();
           p.pop();
           return n;
        
    }
    
    int peek() {
        if(p.empty()) exchange();
        return p.top();
        
    }
    
    bool empty() {
        return p.empty() && s.empty();
    }
};
