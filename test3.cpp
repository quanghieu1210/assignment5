#include <iostream>
#include <string>
using namespace std;

class Substance {
private:
    double temperature;

public:
    Substance() { temperature = 0; }
    Substance(double temp) { temperature = temp; }
    double getTemperature() const { return temperature; }
    void setTemperature(double temp) { temperature = temp; }
    bool isEthylFreezing() const { return temperature <= -173; }
    bool isEthylBoiling() const { return temperature >= 172; }
    bool isOxygenFreezing() const { return temperature <= -362; }
    bool isOxygenBoiling() const { return temperature >= -306; }
    bool isWaterFreezing() const { return temperature <= 32; }
    bool isWaterBoiling() const { return temperature >= 212; }
};

int main() {
    double temp;
    cout << "Enter a temperature: ";
    cin >> temp;
    Substance sub(temp);
    cout << "Substances that will freeze at " << temp << " degrees: ";
    if (sub.isEthylFreezing()) cout << "Ethyl Alcohol ";
    if (sub.isOxygenFreezing()) cout << "Oxygen ";
    if (sub.isWaterFreezing()) cout << "Water ";
    cout << endl;
    cout << "Substances that will boil at " << temp << " degrees: ";
    if (sub.isEthylBoiling()) cout << "Ethyl Alcohol ";
    if (sub.isOxygenBoiling()) cout << "Oxygen ";
    if (sub.isWaterBoiling()) cout << "Water ";
    cout << endl;
    return 0;
}
