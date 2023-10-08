#include "Çì´õ.h"
using namespace std;

int main(void) {


	calculator cal;
	cal.init();
	int choice;
	


	while (1)
	{

		cout << "¿¬»ê ¼±ÅÃ : µ¡¼À(1),»¬¼À(2),³ª´°¼À(3),¿¬»êÈ½¼ö(4) : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case PLUS:
			cout << cal.Add(0,0) << endl;

			
			break;

		case MIN:
			cout << cal.Min(0, 0) << endl;
			break;

		case DIV:
			cout << cal.Div(0, 0) << endl;
			break;

		case SHOW:
			cal.showOpcount();
			break;

		case EXIT:
			return 0;

		default:
			cout << "Illegal Selection .. " << endl;
			break;


		}






	}

	return 0;
}
