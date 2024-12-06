#include <iostream>
using namespace std;
int* f() {
    int* list = new int[4]; 
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    return list;
}
int main() {
    int* p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
    delete[] p; 
    return 0;
}
/*函数调用是在栈区中开辟内存，调用结束后自动销毁。而使用new在堆区开辟
内存，如果不自动释放不会销毁*/
