#include <iostream>
using namespace std;

int main() {
    int a = 12;
    float b = 30.4;
    bool d = true;
    double c = 15.2;
    
    int *aptr = &a;
    float *bptr = &b;
    bool *dptr = &d;
    double *cptr = &c;
    
    cout<<"address of a: "<<aptr<<endl;
    aptr++;
    cout<<"address of a after increment: "<<aptr<<endl;
    
    cout<<"address of b: "<<bptr<<endl;
    bptr++;
    cout<<"address of b after increment: "<<bptr<<endl;
    
    cout<<"address of d: "<<dptr<<endl;
    dptr++;
    cout<<"address of d after increment: "<<dptr<<endl;
    
    cout<<"address of c: "<<cptr<<endl;
    cptr++;
    cout<<"address of c after increment: "<<cptr<<endl;
    
    return 0;
}

OUTPUT:
address of a: 0x7ffc5cdfa18c
address of a after increment: 0x7ffc5cdfa190
address of b: 0x7ffc5cdfa188
address of b after increment: 0x7ffc5cdfa18c
address of d: 0x7ffc5cdfa187
address of d after increment: 0x7ffc5cdfa188
address of c: 0x7ffc5cdfa178
address of c after increment: 0x7ffc5cdfa180

=== Code Execution Successful ===
