#include <iostream>

using namespace std;
template<class T>
class Queue 
{
private:
    int front;
    int rear;
    int size;
    T *data;
    
public:
    Queue(int = 10);
    ~Queue();
    bool isFull();
    bool isEmpty();
    bool peek(T&);
    bool enqueue(const T);
    bool dequeue(T&);
};
 
template<class T>
Queue<T>::Queue(int size)
{
    if (size > 0 && size < 1000)
        this->size = size;
    else
        this->size = 10;
    rear = -1;// Queue rỗng
    front = 0;
    data = new T[size];
}
 
template<class T>
Queue<T>::~Queue()
{
    delete[] data;
}
 
template<class T>
bool Queue<T>::isFull()
{
    if (rear == size)
        return true;
    return false;
}
 
template<class T>
bool Queue<T>::isEmpty()
{
    if (rear == -1)
        return true;
    return false;
}
 
template<class T>
bool Queue<T>::peek(T& Item)
{
    /*Nếu queue rỗng thì trả về false*/
    if (isEmpty() == true)
        return false;
    Item = data[rear];
    return true;
}
 
template<class T>
bool Queue<T>::enqueue(const T Item)
{
    //Nếu ngăn xếp đầy thì trả về false
    if (isFull() == true)
        return false;
    rear++;
    data[rear] = Item;
    return true;
}
 
template<class T>
bool Queue<T>::dequeue(T &Item) 
{
    //Nếu ngăn xếp rỗng thì trả về false
    if (isEmpty() == true || front > rear)
        return false;
    Item = data[front];
    front++;
    return true;
}
 
int main() {
    Queue<int> q(100);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    int temp;
    while (q.dequeue(temp) )
    {
        cout << temp << endl;
    }
    cout<<"------------------"<<endl;
    Queue<double> q2(100);
    q2.enqueue(1.3);
    q2.enqueue(2.5);
    q2.enqueue(3.9);
    q2.enqueue(4.6);
    q2.enqueue(5.7);
    q2.enqueue(6.5);
    q2.enqueue(7.9);
    double temp1;
    while (q2.dequeue(temp1) )
    {
        cout << temp1 << endl;
    }

    return 0;
}