#include <iostream>
#include <cstring>
using namespace std;

int main(){
     int* p = new int;
     int* p2 = p;
     *p = 10;
     delete p;
     *p2 = 100;
     cout << *p2; // Dong code loi
     delete p2;
//      Giải phóng bộ nhớ quá sớm, Giải phóng p làm cho p2
//      trở thành con trỏ vào vùng nhớ không còn hiệu lực
}

