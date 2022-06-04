#include <iostream>
using namespace std;

class Bubble{
    public:
        void tukar(const int *);
        void tampilkan(const int *);
        Bubble(){
            cout<<"Program Bubble Sort"<<endl;
            cout<<"Data sebelum disorting : ";
            tampilkan(a);
            cout<<"Data setelah disorting : ";
            tukar(a);
        }
    private:
        int a[8]={9,2,1,4,11,10,18,6} ;
};

void Bubble::tampilkan(const int *){
    for(int i=0; i<8; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void Bubble::tukar(const int *){
    int temp;
    for(int i=0; i<7; i++){
        for(int j=i+1; j<8; j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    tampilkan(a);
}

int main(int argc, char const *argv[])
{
    Bubble x;
    return 0;
}