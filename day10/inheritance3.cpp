/*
	상속관계에서 이니셜라이즈 사용하기
*/
using namespace std;
#include <iostream>


class Car {
private:
	int gasolineGauge;
public:
	Car(int ag) : gasolineGauge(ag){}		// 콜론초기화
	int getGasGauge() { return gasolineGauge; }

};
class HybridCar : public Car{
private:
	int electricGauge;
public:
	HybridCar(int ag, int ae) : Car(ag), electricGauge(ae) {}	// 몸체{} 에다 적어도 되지만, 콜론초기화로 해도됨
	int getElecGauge() { return electricGauge; }
};
class HybridWaterCar : public HybridCar {
	int WaterGauge;
public:
	HybridWaterCar(int ag, int ae, int aw) : HybridCar(ag, ae), WaterGauge(aw) {}

	void showGauge() {
		cout << "잔여 가솔린 : " << getGasGauge() << endl;
		cout << "잔여 전기량 : " << getElecGauge() << endl;
		cout << "잔여 물량 : " << WaterGauge << endl;
	}
};

int main()
{
	HybridWaterCar hwc(10, 20, 30);
	hwc.showGauge();

	return 0;
}