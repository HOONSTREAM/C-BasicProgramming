#include "Header.h"
int main(void) {

	int choice;
	int m; // ������� �׷���Ʈ�ҵ� ���Ű���
	int g; //������ �����ݾ�
	int k; // ���� ��Ż �ݾ�
	int o;
	int p;
	int q;
	Broee Broe(3000,10,0);
	SWORDBuyer Actor(0);


	while (1)
	{

		cout << "�� �� : ����(1),�Ǹ�(2),����(3),����������(4),������(5) : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case ����:
			cout << "������� ���� ������ �Դϴ�." << endl;
			Broe.showSWORDResult();
			cout << "*************************************" << endl;
			cout << "������� �׷���Ʈ�ҵ� ������ 3000������ �Դϴ�." << endl;
			cout << "������ ������ �Է��ϼ���." << endl;

			cin >> m;
			k = m * 3000;
			Actor.BuySWORD(Broe, k);

			break;

		case �Ǹ�:

			cout << "���� ���� ������ �Դϴ�. " << endl;
			Actor.showSWORDResult();
			cout << "*************************************" << endl;
			cout << "*************************************" << endl;
			cout << "�Ǹ��� ������ �Է��ϼ���. �ǸŰ����� 50% ���� �˴ϴ�." << endl;
			
			cin >> o;
			
		    Actor.SellSWORD(Broe, o);
			cout << "�ǸŰ� �Ϸ�Ǿ����ϴ�." << endl;

			break;



		case ����:
			Broe.showSWORDResult();
			Actor.showSWORDResult();

			break;


		case ����������:
			cout << "������ �ݾ��� �Է��ϼ���." << endl;
			cin >> g;
			if (g < 0)
			{
				cout << "�ݾ��� ���̳ʽ��� �� �� �����ϴ�." << endl;

				break;



			}
			SWORDBuyer::SWORDBuyer(g);

			cout << "************************************" << endl;
			cout << g << " ������ ������ �Ϸ�Ǿ����ϴ�." << endl << endl;



			break;




		case ������:

			return 0;


		default:
			cout << "�߸��� ����� �޴����� �Դϴ�. " << endl;
			break;


		}






	}




}