#include <iostream>
using namespace std;
class BoxClass {
private:
	int m_width{ 0 };
	int m_height{ 0 };
	int m_length{ 0 };
public:
	int volume() {
		return m_width * m_height * m_length;
	}

};

int main()
{
	BoxClass b;
	cout << "b.volume: " << b.volume() << endl;		// 쓰레기값 들어있어서 초기화(5~7행)

	return 0;
}