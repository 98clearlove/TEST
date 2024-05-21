#include  <iostream>  
using  namespace  std;
class Point {
public:
	Point(int x,int y):x(x),y(y){}
	void show() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	//重载运算符后++
	Point operator ++(int) {
		Point temp(*this);
		++*this;
		return temp;
	}
	//重载运算符前++
	Point& operator ++() {		
		x += 1;
		y += 1;
		return *this;
	}
	//重载运算符后--
	Point operator --(int) {
		Point temp(*this);
		--*this;
		return temp;
	}
	//重载运算符前--
	Point& operator --() {
		x -= 1;
		y -= 1;
		return *this;
	}
private:
	int x, y;
};
int main41() {
	int x, y;
	cin >> x, y;
	Point point(x, y);
	point.show();
	point++.show();
	(++point).show();
	point--.show();
	(--point).show();
	return 0;
}