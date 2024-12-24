#include <iostream>
using namespace std;
class Cub {
private:
    double length;
    double width;
    double height;
public:
    void input(double l,double w,double h){
        length = l;
        width = w;
        height = h;
    }
    void output() {
        cout << "该长方柱的体积是：" << length*width*height << endl;
    }
};
int main() {
    double l, w, h;
    Cub cub[3];  
    for (int i = 0; i < 3; i++) {
        cout << "请输入第" << (i + 1) << "个长方柱的信息：";
        cin >> l >> w >> h;
        cub[i].input(l,w,h);
        cout << "第" << (i + 1) << "个长方柱：";
        cub[i].output();
    }
    return 0;
}