#include "Queue.h"

int main()
{
    Queue queue(15);
    string SV;
    int key;
    while (true)
    {
        cout<< "----------------------------"<<endl;
        cout << "1. Them sinh vien. " << endl;
        cout << "2. Xuat sinh vien." << endl;
        cout << "3. Xoa 5 sv them 10 sv." << endl;
        cout << "4. Xuat 15 sinh vien." << endl;
        cout << "5. Exit"<<endl;
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
                
                getline(cin,SV);
                queue.Enqueue(SV);
            }
            break;
        case 2:
            cout << "\nDanh sach sinh vien vua nhap: \n";
            for ( int i = 0; i < 10; i++)
            {
                cout << i + 1 << ". " << queue.getQueue(i) << "\n";
            }
            break;

        case 3: 
        for (int i = 0; i < 5; i++)
            {
                queue.Dequeue(SV);
            }
            cin.ignore();
            for (int i = 0; i < 10; i++)
            {
                cout << "Nhap sinh vien thu: " << i + 6 << "\n";
                getline(cin, SV);
                queue.Enqueue(SV);
            }
            break;
        case 4 :

            cout << "\nDanh sach 5 sinh vien cu va 10 sinh vien moi: \n";
            for (int i = 0; i < 15; i++)
            {
                cout << i + 1 << ". " << queue.getQueue(i) << "\n";
            }
            break;
        default:
            cout<<"Chuc nang nay chua co! Xin moi chon lai"<<endl;
            break;
        }
        if (key ==5) break;
    }
    system("pause");
    return 0;
}