/*
	��Ӱ��迡�� �̴ϼȶ����� ����ϱ�
*/
using namespace std;
#include <iostream>


class Car {
private:
	int gasolineGauge;
public:
	Car(int ag) : gasolineGauge(ag){}		// �ݷ��ʱ�ȭ
	int getGasGauge() { return gasolineGauge; }

};
class HybridCar : public Car{
private:
	int electricGauge;
public:
	HybridCar(int ag, int ae) : Car(ag), electricGauge(ae) {}	// ��ü{} ���� ��� ������, �ݷ��ʱ�ȭ�� �ص���
	int getElecGauge() { return electricGauge; }
};
class HybridWaterCar : public HybridCar {
	int WaterGauge;
public:
	HybridWaterCar(int ag, int ae, int aw) : HybridCar(ag, ae), WaterGauge(aw) {}

	void showGauge() {
		cout << "�ܿ� ���ָ� : " << getGasGauge() << endl;
		cout << "�ܿ� ���ⷮ : " << getElecGauge() << endl;
		cout << "�ܿ� ���� : " << WaterGauge << endl;
	}
};

int main()
{
	HybridWaterCar hwc(10, 20, 30);
	hwc.showGauge();

	return 0;
}