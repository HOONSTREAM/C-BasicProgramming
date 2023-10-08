#include "Çì´õ.h"

double calculator::Add(double x, double y) {

	cout << "µÎ ¼ö ÀÔ·Â : " << endl;
	cin >> x >> y;

     	result = x + y;
		count1++;

		return result;
		

	
}

double calculator::Div(double x, double y) {

	cout << "µÎ ¼ö ÀÔ·Â : " << endl;
	cin >> x >> y;

	result = x / y;
	count3++;


	return result;
	
}

double calculator::Min(double x, double y) {

	cout << "µÎ ¼ö ÀÔ·Â : " << endl;
	cin >> x >> y;

	result = x - y;
	count2++;

	return result;
	

}

void calculator::init() {

	count1 = 0; // µ¡¼ÀÀÌ ¿¬»êµÇ´Â È½¼ö
	count2 = 0; // »¬¼ÀÀÌ ¿¬»êµÇ´Â È½¼ö
	count3 = 0;// ´Ï´°¼ÀÀÌ ¿¬»êµÇ´Â È½¼ö
}

	

void calculator::showOpcount() {

	cout << "µ¡¼À : " << count1 << endl;
	cout << "»¬¼À : " << count3 << endl; 
	cout << "³ª´°¼À : " << count2 << endl;


}




