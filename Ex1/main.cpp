#include "Stack.h"

int main()
{
    Stack stack(10);
    string SV;
    int key;
    while (true)
    {
        cout<< "----------------------------"<<endl;
        cout << "1. Them sinh vien. " << endl;
        cout << "2. Xuat sinh vien." << endl;
        cout<< "----------------------------"<<endl;
        cout<<"Ban muon chon gi?"<<endl;
        cin >> key;
        cout<< "----------------------------"<<endl;

        switch (key)
        {
        case 1:
            cout<< "Nhap sinh vien: \n";
            for(int i=0;i<10;i++)
            {
                cin>> SV;
                stack.pushData(SV);
            }
            break;
        case 2:
            while( stack.popData(SV) )
            {
                cout<< SV<<endl;
            }
            break;
        default:
            cout<<"Chuc nang nay chua co! Xin moi chon lai"<<endl;
            break;
        }
    }
    system ("pause");
    return 0;
}