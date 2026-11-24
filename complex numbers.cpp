#include <iostream>

using namespace std;

class cpx {
public:
	float re;
	float im;


	cpx(float re = .0f, float im = .0f) :re(re), im(im) {}
	~cpx() {}
	cpx(const cpx& orig) :re(orig.re), im(orig.im) {}

	void print() {
		cout << this->re << ((this->im >= 0) ? "+" : "-") << this->im << "i\n";
	}
};

cpx operator+(cpx l, cpx r) {
	cpx rez(l);
	rez.re += r.re;
	rez.im += r.im;
	return rez;
}

cpx operator-(cpx l, cpx r) {
	cpx rez(l);
	rez.re -= r.re;
	rez.im -= r.im;
	return rez;
}

cpx operator*(cpx l, cpx r) {
	cpx rez(l);
	rez.re *= r.re;
	rez.im *= r.im;
	return rez;
}

cpx operator/(cpx l, cpx r) {
	cpx rez(l);
	rez.re /= r.re;
	rez.im /= r.im;
	return rez;
}

/*cpx operator~(cpx l, cpx r) {
	cpx rez(l);
	rez.re %= r.re;
	rez.im %= r.im;
	return rez;
}*/ //nemozam da se snajdam za modul

int main() {
	cpx x(1, 2);
	cpx y(x);

	(x - y).print();


	return 0;
}

