#include <iostream>

using namespace std;
int main() {
    int L[10];
    int i, j, temp;

    // Input data ke dalam array
    for(i=0; i<10; i++) {
        cout<<"Input Data "<<i<<": ";
        cin>>L[i];
    }
    cout<<endl;

    // Menampilkan data yang dimasukkan sebelum sorting
    cout<<"Data sebelum disorting: "<<endl;
    for(i=0; i<10; i++) {
        cout<<L[i]<<" ";
    }
    cout<<endl;

    for(i=0; i<=10; i++) {
        for(j=0; j<=10; j++) {
            if(L[j+1]<L[j]) {
                temp = L[j+1];
                L[j+1]  = L[j];
                L[j]    = temp;
            }
        }
    }


    cout<<"Data setelah disorting: "<<endl;

    for(j=0; j<10; j++) {
        cout<<L[j]<<" ";
    }
    cout<<endl;
return 0;
}
