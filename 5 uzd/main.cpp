#include <iostream>


using namespace std;



int main () {
	int SmallAudinio_ammount;
	int BigAudinio_ammount;
	double small_total;
	double big_total;
	double Audinio_total;
	const double Small_PRICE = 17.3;
	const double Big_PRICE = 33.1;

	cout << "Kiek jums reikia 11 m audinio?";
	cin >> SmallAudinio_ammount;
	cout << "Kiek jums reikia 18 m audinio?";
	cin >> BigAudinio_ammount;
	small_total = SmallAudinio_ammount * Small_PRICE;
	big_total = BigAudinio_ammount * Big_PRICE;
	Audinio_total = small_total + big_total;
	cout <<Audinio_total<<"LT"<< endl;
	system("PAUSE");



}


