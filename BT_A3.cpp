#include <iostream>

using namespace std;

int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
    //    Vì lệnh delete chỉ áp dụng lên con trỏ khởi tao theo kiểu bộ nhớ đông
    //    Vì vậy khi sử dụng lệnh này vs con
    //    trỏ khởi tạo thông thường lệnh này sẽ không có hiệu lực
}
