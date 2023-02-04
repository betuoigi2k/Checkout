#ifndef _STACK_H_
#define _STACK_H_

#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Stack
{
private:
    int msize; // kich thuoc stack
    int mtop; // xac dinh vi tri dau stack
    string *mdata;//mang tao ngan xep
public:
    Stack(int size);
    ~Stack();

    bool isEmpty(); // kiem tra ngan xep co rong khong
    bool isFull(); //kiem tra ngan xep day chua

    void pushData(string &Data); // them data
    bool popData(string & Data); // xoa data
    string peekData(); //lay data
};



#endif