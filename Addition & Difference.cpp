#include <iostream>
using namespace std;

int main() {
    int arr[] = {50,40,30,20,10};
    int *p1 = &arr[3];
    int *p2 = &arr[1];
    int difference = *p2 - *p1;
    int addition = *p1 + *p2;
    cout<<"Difference: "<<difference<<endl;
    cout<<"Addition: "<<addition<<endl;
    return 0;
}
OUTPUT:
Difference: 20
Addition: 60

=== Code Execution Successful ===
