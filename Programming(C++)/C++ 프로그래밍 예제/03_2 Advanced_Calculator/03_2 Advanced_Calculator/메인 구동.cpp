#include "Çì´õ.h"

int main(void){


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
			cal.SetValue(0,0);
			cout << cal.add() << endl;


			break;

		case MIN:
			cal.SetValue(0, 0);
			cout << cal.Min() << endl;
			break;

		case DIV:
			cal.SetValue(0, 0);
			cout << cal.Div() << endl;
			break;

		case SHOW:
			cal.show();

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