// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
    string menu[5]={"soto","rawon","pecel","teh","kopi"};
    int harga[5]={15000,20000,10000,3000,5000};
    int porsi[5];
    int total[5];
    int i;
    int grandtotal=0;
    for(i=0;i<5;i++)
        {
            cout<<"menu ";
            cout<<menu[i]<<endl;
            cout<<"harga ";
            cout<<harga[i]<<endl;
            cout<<"masukkan porsi ";
            cin>>porsi[i];
            total[i]=porsi[i]*harga[i];
            cout<<"total ";
            cout<<total[i]<<endl;
            cout<<"____________"<<endl;
            grandtotal=grandtotal+total[i];
        }
    cout<<"------------------------------------"<<endl;
    cout<<"TOTAL SEMUA PESANAN ADALAH: ";
    cout<<grandtotal<<endl;
    cout<<"------------------------------------"<<endl;
    system("pause");
    
    return 0;
}
