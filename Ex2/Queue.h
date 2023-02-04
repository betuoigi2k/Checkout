#ifndef _QUEUE_H_
#define _QUEUE_H_
#include<iostream>
#include<string>
using namespace std;

class Queue
{
private:
    int msize; // kich thuoc queue
    int mfront ; // vi tri dau queue
    int mrear; // vitri cuoi queue
    string *mqueue; 
public:
    Queue(int msize);
    ~Queue();
    int getSize();
    void setSize(int size);

    string getQueue(int j);
    void Enqueue(string &Sv);
    bool Dequeue(string &Sv);
    string Peek();

    bool isEmpty();
    bool isFull();

};

#endif