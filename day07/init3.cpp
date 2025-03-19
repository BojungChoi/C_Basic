/*

*/
#include <iostream>
using namespace std;
class CTime {
private:
	int m_hour{ 0 };
	int m_min{ 0 };
	int m_sec{ 0 };
public:
	CTime() { cout << "기본 생성자 호출" << endl; }		// 디폴트 생성자
	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s)		// 콜론초기화(이니셜라이져 리스트)
	{
		cout << "입력 3개 받는 생성자호출" << endl;		
		//m_hour = h;	// 여기서 초기화 되지않고 메서드 헤드부분(13행)에서 초기화가 이루어지고내려옴니다.
		//m_min = m;
		//m_sec = s;
	}

	void setTime(int hour, int min, int sec) {
		m_hour = hour;
		m_min = min;
		m_sec = sec;
	}
	void showTime() const{
		printf("현재 시간은 %d 시 %d 분 %d 초 입니다.\n", m_hour, m_min, m_sec);
	}
};

int main()
{
	//CTime now; 밑에행과 같은말임
	CTime now = CTime();
	now.showTime();

	//CTime t(15, 30, 30);
	//CTime t = { 12, 12, 12 };
	CTime t{ 10, 11, 12 };
	t.showTime();


	return 0;
}