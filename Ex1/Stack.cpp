#include "Stack.h"

Stack :: Stack(int size)
{
     if (size > 0 && size < 1000)
        msize = size;
    else
        msize = 10;
    mtop =-1;
    mdata = new string[msize];
}

Stack :: ~Stack()
{
    delete [] mdata;
}

bool Stack :: isEmpty() 
{
    return mtop == -1 ? true : false;
}
bool Stack :: isFull()
{
    return mtop == msize ? true : false;
}



void Stack :: pushData(string &Data)
{
    if (isFull()) {
        cout << "Stack is full!" << endl;
        return;
    }
    mtop++;
    mdata[mtop] = Data;
}
bool Stack :: popData(string &Data)
{
    if (isEmpty()) {
        cout << "Stack is Empty" << endl;
        return false;
    }
    Data = mdata[mtop];
    mtop--;
    return true;

}
string Stack :: peekData()
{
    
    string x = mdata[mtop];
    return x;
}