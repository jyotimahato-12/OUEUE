class MyCircularQueue {
public:
   int *arr;
   int front;
   int rear;
   int length;
    MyCircularQueue(int k) {
        arr=new int[k];
        front=-1;
        rear=-1;
        length=k;
        
    }
    
    bool enQueue(int value) {
        if(front==-1&&rear==-1)
        {
           front=rear=0;
           arr[rear]=value;
           return 1;
        }
        else if(!((rear+1)%length==front))
        {
          rear=(rear+1)%length;
          arr[rear]=value;
          return 1;
        }
        return 0;

        
    }
    
    bool deQueue() {
        if(front==-1&&rear==-1)
          return 0;
        else if(rear==front)
        {
          
          front=-1;
          rear=-1;
          return 1;  
        }
        else
        {
          
          front=(front+1)%length;
          return 1;
        }

    }
    
    int Front() {
        if(front==-1)
          return -1;
        else
        {
          int ele=arr[front];
          return ele;
        }
        
    }
    
    int Rear() { 
        if (rear==-1)
          return -1;
    
        
      int ele=arr[rear];
        return ele; 
        
    }
    
    bool isEmpty() {
        return front==-1; 
        
    }
    
    bool isFull() {
        return((rear+1)%length==front);
          
    }
};