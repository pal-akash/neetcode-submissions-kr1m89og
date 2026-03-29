class MinStack {
private: 
    vector<int> arr;
public:
    MinStack() {
        this -> arr;
    }
    
    void push(int val) {
        this -> arr.push_back(val);
    }
    
    void pop() {
        int n = this -> arr.size();
        this -> arr.resize(n-1);
    }
    
    int top() {
        int n = this -> arr.size();
        return this -> arr[n-1];
    }
    
    int getMin() {
        int min = INT_MAX;
        for(int num: this -> arr){
            if(num < min) {
                min = num;
            }
        }
        return min;
    }
};
