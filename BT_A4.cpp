#include <iostream>

using namespace std;

int main(){
    int x=1;
    int* p = new int;
    p = &x;
    delete p;
    cout << &x;
    // Chuong trinh bi loi: has stopped working. Con tro p dang tro toi dia chi cua x
    // Khi con tro p bi giai phong, dia chi cua x cung mat
    // Nen khi ta tro toi x da gay ra loi cua chuong trinh
}
