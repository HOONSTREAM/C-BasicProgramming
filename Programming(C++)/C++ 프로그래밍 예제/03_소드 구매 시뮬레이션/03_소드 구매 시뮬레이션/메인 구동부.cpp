#include "Header.h"
int main(void) {

	int choice;
	int m; // 브로이의 그레이트소드 구매갯수
	int g; //갈리드 충전금액
	int k; // 구매 토탈 금액
	int o;
	int p;
	int q;
	Broee Broe(3000,10,0);
	SWORDBuyer Actor(0);


	while (1)
	{

		cout << "메 뉴 : 구매(1),판매(2),실적(3),갈리드충전(4),나가기(5) : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 구매:
			cout << "브로이의 현재 보유량 입니다." << endl;
			Broe.showSWORDResult();
			cout << "*************************************" << endl;
			cout << "브로이의 그레이트소드 가격은 3000갈리드 입니다." << endl;
			cout << "구매할 갯수를 입력하세요." << endl;

			cin >> m;
			k = m * 3000;
			Actor.BuySWORD(Broe, k);

			break;

		case 판매:

			cout << "현재 나의 보유량 입니다. " << endl;
			Actor.showSWORDResult();
			cout << "*************************************" << endl;
			cout << "*************************************" << endl;
			cout << "판매할 갯수를 입력하세요. 판매가격은 50% 감가 됩니다." << endl;
			
			cin >> o;
			
		    Actor.SellSWORD(Broe, o);
			cout << "판매가 완료되었습니다." << endl;

			break;



		case 실적:
			Broe.showSWORDResult();
			Actor.showSWORDResult();

			break;


		case 갈리드충전:
			cout << "충전할 금액을 입력하세요." << endl;
			cin >> g;
			if (g < 0)
			{
				cout << "금액은 마이너스가 될 수 없습니다." << endl;

				break;



			}
			SWORDBuyer::SWORDBuyer(g);

			cout << "************************************" << endl;
			cout << g << " 갈리드 충전이 완료되었습니다." << endl << endl;



			break;




		case 나가기:

			return 0;


		default:
			cout << "잘못된 방법의 메뉴선택 입니다. " << endl;
			break;


		}






	}




}