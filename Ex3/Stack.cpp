#include <iostream>
using namespace std;
 
template<class T>
class Stack {
private:
    int Size;
    int Top;
    T *Data;
public:
    Stack(int = 10);
    ~Stack();
    bool Push(const T&);
    bool Pop(T&);
    bool isEmpty() const;
    bool isFull() const;
};
 
template<class T>
Stack<T> ::Stack(int n) 
{
    if (n > 0 && n < 1000)
        Size = n;
    else
        Size = 10;
    Top = -1;
    Data = new T[Size];
}
 
template<class T>
Stack<T> ::~Stack() 
{
    delete[] Data;
}
 
template<class T>
bool Stack<T> ::Push(const T& Item) 
{
    if (!isFull()) {
        Top++ ;
        Data[Top] = Item;
        return true;
    }
    return false;
}
 
template<class T>
bool Stack<T> ::Pop(T& Item) 
{
    if (!isEmpty()) {
        Item = Data[Top];
        Top--;
        return true;
    }
    return false;
}
 
template<class T>
bool Stack<T>::isEmpty() const{
    if (Top == -1)
        return true;
    return false;
}
 
template<class T>
bool Stack<T>::isFull() const {
    if (Top == Size)
        return true;
    return false;
}
 
int main() 
{
    Stack<int> stack(10);
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    stack.Push(4);
    stack.Push(5);
    stack.Push(6);
    stack.Push(7);
    int data;
    while (stack.Pop(data) ) 
    {
        cout << data<<endl;
    }
    cout<<"-------------"<<endl;
    Stack<double> stack1(10);
    stack1.Push(1.2);
    stack1.Push(2.3);
    stack1.Push(3.1);
    stack1.Push(4.2);
    stack1.Push(5.3);
    stack1.Push(6.2);
    stack1.Push(7.2);
    double data1;
    while (stack1.Pop(data1) ) 
    {
        cout << data1<<endl;
    }



    system("pause");
    return 0;
}