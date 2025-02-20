#include <bits/stdc++.h> 
class Queue {
public:
    int top;
    int rear;
    int*arr;
    int length;
    Queue() {
        top=0;
        rear=0;
        length=1000;
        arr=new int[length];
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(rear==0||top>=rear)
            return true;
        return false;
    }

    void enqueue(int data) {
        if(rear<length)
       {     
          
          arr[rear]=data;
            rear++;
       }
        
    }

    int dequeue() {
        if(top<rear)
       {     
            
            int val=arr[top];
            top++;
             
             return val;
        }
        return -1;
    }
      int front() {
        if(top<rear)
        {
           
           int val=arr[top];
           return val;
        }
        return -1;
      

       // Implemefront() function
    }
};