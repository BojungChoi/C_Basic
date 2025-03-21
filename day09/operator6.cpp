/*
	�����Լ� ������ �����ε� : private
*/
#include <iostream>
using namespace std;

class Complex {
private:
	double real, image;
public:
	Complex(double r = 0, double i = 0) : real(r), image(i) {}
	Complex add(const Complex& other) {
		return Complex(real + other.real, image + other.image);
	}
	Complex operator+(const Complex& other){
		return Complex(real + other.real, image + other.image);
	}
	Complex operator*(int n) {
		return Complex(real * n, image * n);
	}
	void showComplex() {
		cout << "real : " << real << " image: " << image << endl;

	}
	friend Complex operator*(int n, const Complex& other);		// �Լ� ������ friend ������ �ϸ� private �Ǵ� protected ����� ������ ���ȴ�.
	friend std::ostream& operator<<(std::ostream& out, const Complex& other);
};
Complex operator*(int n, const Complex& other) {
	return Complex(n * other.real, n * other.image);
}
std::ostream& operator<<(std:: ostream& out, const Complex& other) {
	out << other.real << ", " << other.image;
	return out;

}

int main()
{

	Complex c(1.1, 2.1);
	Complex c2(3.2, 4.2);
	Complex c3 = c + c2;
	c3.showComplex();
	Complex c4 = c * 100;
	c4.showComplex();
	Complex c5 = 100 * c3;
	c5.showComplex();

	cout << c << endl;			// ��� ������(<<) �� �⺻������ ��ü�� ����� �� ����.


	return 0;
}