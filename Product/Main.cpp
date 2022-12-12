#include "Product.h"

int main()
{
	srand(time(NULL));
	Shop shops;

	
	system("color F0");
	cout << "\n\n\n\t\t\t Welcome in shop Alphabet of taste!!!\n\n\n" << endl;
	system("pause");
	const int num_menu = 3;
	int ch = 0, active_menu = 0;
	bool q;
	do
	{
		bool exit = false;
		while (!exit)
		{
			show_menu();
			gotoxy(0, active_menu);
			ch = _getch();
			if (ch == 224) ch = _getch();
			switch (ch)
			{
			case 27: exit = true; break;
			case 72: active_menu--; break;
			case 80: active_menu++; break;
			case 13:

				if (active_menu == 0)
				{
					system("cls");
					frame();
					shops.Print();
					shops.offfstream("Print_shops.txt");
					//shops.ifffstream("Print_shops.txt");
					system("pause");
				}
				else if (active_menu == 1)
				{
					system("cls");
					frame();
					shops.Print();
					shops.Sale_all();
					shops.offfstream("Sale_all.txt");
					//shops.ifffstream("Sale_all.txt");

					system("pause");

				}
				else if (active_menu == 2)
				{
					system("cls");
					shops.now_day(); 
					frame();
					shops.Print();
					shops.best_before_date(shops.Get_day(), shops.Get_month());
					shops.offfstream("best_before_date.txt");
					//shops.ifffstream("best_before_date.txt");
					system("pause");

				}
				break;
			}
			if (active_menu < 0) active_menu = num_menu - 1;
			if (active_menu > num_menu - 1) active_menu = 0;

		}
		system("cls");
		cout << "If you wanna continue press 1, no 0" << endl;
		cin >> q;
		system("cls");
	} while (q == 1);
	system("cls");

	return 0;
		
}
