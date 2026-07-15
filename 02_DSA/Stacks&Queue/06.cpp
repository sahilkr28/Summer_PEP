#include<bits/stdc++.h>
using namespace std;

class MyCircularQueue {
private:
    vector<int> data;
    int front;
    int rear;
    int size;
    int count;

public:
    MyCircularQueue(int k) {
        size = k;
        front = 0;
        rear = -1;
        count = 0;

        data.resize(k);
    }
    
    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }

        rear = (rear + 1) % size;
        data[rear] = value;
        count++;

        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) {
            return false;
        }

        front = (front + 1) % size;
        count--;

        return true;
    }
    
    int Front() {
        if (isEmpty()) {
            return -1;
        }

        return data[front];
    }
    
    int Rear() {
        if (isEmpty()) {
            return -1;
        }

        return data[rear];
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
        return count == size;
    }
};

int main(){
    
    return 0;
}