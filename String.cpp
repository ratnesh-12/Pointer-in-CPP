#include <iostream>
using namespace std;

int main() {
    char str[10000];
    cout<<"Enter a string: ";
    cin>>str;
    char *ptr=str;
    cout<<"You entered: ";
    while(*ptr != '\0') {
        cout<<*ptr;
        ptr++;
    }
    return 0;
}

OUTPUT:
Enter a string: hello,pointer!
You entered: hello,pointer!

=== Code Execution Successful ===
