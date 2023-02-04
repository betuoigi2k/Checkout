#include "Queue.h"

Queue :: Queue(int msize)
    {
        this -> msize = msize;
        mfront =0;
        mrear = -1;
        mqueue = new string[msize];

    }
    
Queue :: ~Queue()
{
    delete[] mqueue;
}

int Queue :: getSize()
{
    return msize;
}
void Queue :: setSize(int size)
{
    this -> msize = size;
}

bool Queue :: isEmpty()
{
    return (mfront < 0 || mfront > mrear ) ? true : false;
}
bool Queue :: isFull()
{
    return mrear == msize -1 ? true : false;
}


void Queue :: Enqueue(string &SV)
{
    if (isFull()) 
    {
        cout << "Queue is full" << endl;
        return;
    }
    mrear++;
    mqueue[mrear] = SV;
}

string Queue::getQueue(int j)
{
    return *(mqueue + j);
}

bool Queue :: Dequeue(string &SV)
{
    if (isEmpty()) 
    {
        cout << "Queue is empty" << endl;
        return false;
    }
    SV = mqueue[mfront] ;
    mqueue[mfront] = mqueue[msize - mrear - 1];
    mrear--;
    mfront++;
    return true;
}
string Queue :: Peek()
{
    string s =  mqueue[mfront];
    return s;
}




