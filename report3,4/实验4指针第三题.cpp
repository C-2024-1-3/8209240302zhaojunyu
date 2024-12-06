#include <iostream>
using namespace std;
void f(char* st, int i) {
    st[i] = '\0';  
    cout << st << endl;  
    if (i > 1)
        f(st, i - 1);
}
int main() {  
    char st[] = "abcd";
    f(st, 4);
    return 0;
}
/*递归就是函数不断调用自身的过程，每一层递归
执行到底时，自动返回调用它的那一层函数，归还掌控权*/
