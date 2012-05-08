


#include <iostream>
using namespace std;

class cRectangle {
int x, y;
public:
void set_values (int,int);
int area () {return (x*y);}
};

void cRectangle::set_values (int a, int b) {
x = a;
y = b;
}

int main () {
cRectangle rect;
int x1,x2;
cout << "two integers:" << endl;
cin >> x1 >> x2;
rect.set_values (x1,x2);
cout << "area: " << rect.area() << endl;
return 0;
}