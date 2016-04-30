#include <iostream>

using namespace std;
int main() {
    int L[10];
    int i;

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
    cout<<"Data setelah disorting: "<<endl;
    for(i=0; i<10; i++) {
        cout<<L[i]<<" ";
    }

return 0;
}
