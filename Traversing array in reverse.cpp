#include <iostream>
using namespace std;

int main() {
    int arr[] = {20,40,60,80};
    int *ptr = arr+3;
    cout<<"Traversing array: ";
    for(int i=0; i<4; i++){
        cout<<*(ptr-3+i)<<" ";
    }
    cout<<endl;
    cout<<"Traversing array in reverse: ";
    for(int i=0; i<4; i++){
        cout<<*(ptr-i)<<" ";
    }
    return 0;
}

OUTPUT:
Traversing array: 20 40 60 80 
Traversing array in reverse: 80 60 40 20 

=== Code Execution Successful ===
