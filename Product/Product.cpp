#include "Product.h"


Tomatos::Tomatos(string name_s, double price, double weight)
{
	this->name_s = name_s;
	this->price = price;
	this->weight = weight;
}

void Tomatos::Print()
{
	all_price = price * weight;
	cout << name_s << "\t" << price << " $ " << "\t" << weight << " kg.  " << all_price << " $\t" << "6 days\t\t";
}

void Tomatos::Sale()
{
	cout << "Enter the weight of the item you are going to buy" << endl;
	do
	{
		if(weight < 0)
			weight += your_weight;
		cin >> your_weight;
		weight -= your_weight;
		try
		{
			if (weight < 0)
				throw exception("So many items in the store, enter another weight");
			cout << "Price your purchase - " << your_weight * price << " $" << endl;
			cout << "After buy shop have" << endl;
			Print();
		}
		catch (exception& str)
		{
			cout << str.what() << endl;	
		}
	} while (weight < 0);
	
}

void Tomatos::best_before_date(int now_day, int now_month)
{
	now_day -= day;
	try
	{
		if (now_day >= 6)
			throw exception("Tomatos are damaged");
		cout << "Expiration date Tomatos has not expired" << endl;
		cout << "Tomatos will not be expired yet " << 6 - now_day << " day(s)";
	}
	catch (const exception& str)
	{
		cout << str.what();
	}
}

void Cucumber::best_before_date(int now_day, int now_month)
{
	now_day -= day;
	try
	{
		if (now_day >= 12)
			throw exception("Cucumber are damaged");
		cout << "Expiration date Cucumber has not expired" << endl;
		cout << "Cucumber will not be expired yet " << 12 - now_day << " day(s)";
	}
	catch (const exception& str)
	{
		cout << str.what();
	}
}

Cucumber::Cucumber(string name_s, double price, double weight)
{
	this->name_s = name_s;
	this->price = price;
	this->weight = weight;
}

void Cucumber::Sale()
{
	cout << "Enter the weight of the item you are going to buy" << endl;
	do
	{
		if (weight < 0)
			weight += your_weight;
		cin >> your_weight;
		weight -= your_weight;
		try
		{
			if (weight < 0)
				throw exception("So many items in the store, enter another weight");
			cout << "Price your purchase - " << your_weight * price << " $" << endl;
			cout << "After buy shop have" << endl;
			Print();
		}
		catch (exception& str)
		{
			cout << str.what() << endl;
		}
	} while (weight < 0);
}

void Cucumber::Print()
{
	all_price = price * weight;
	cout << name_s << "\t" << price << " $ " << "\t" << weight << " kg.  " << all_price << " $\t" << "12 days\t\t";
}

Salat::Salat(string name_s, double price, double weight)
{
	this->name_s = name_s;
	this->price = price;
	this->weight = weight;
}

void Salat::Print()
{
	all_price = price * weight;
	cout << name_s << "\t" << price << " $ " << "\t" << weight << " kg.  " << all_price << " $\t" << "7 days\t\t";
}

void Salat::Sale()
{
	cout << "Enter the weight of the item you are going to buy" << endl;
	do
	{
		if (weight < 0)
			weight += your_weight;
		cin >> your_weight;
		weight -= your_weight;
		try
		{
			if (weight < 0)
				throw exception("So many items in the store, enter another weight");
			cout << "Price your purchase - " << your_weight * price << " $" << endl;
			cout << "After buy shop have" << endl;
			Print();
		}
		catch (exception& str)
		{
			cout << str.what() << endl;
		}
	} while (weight < 0);
}

void Salat::best_before_date(int now_day, int now_month)
{
	now_day -= day;
	try
	{
		if (now_day >= 7)
			throw exception("Salat are damaged");
		cout << "Expiration date Salat has not expired" << endl;
		cout << "Salat will not be expired yet " << 7 - now_day << " day(s)";
	}
	catch (const exception& str)
	{
		cout << str.what();
	}
}

Shampoo::Shampoo(string name_s, double price, int thing)
{
	this->name_s = name_s;
	this->price = price;
	this->thing = thing;
}

void Shampoo::Print()
{
	all_price = price * thing;
	cout << name_s << "\t" << price << " $ " << "\t" << thing << " th.\t   " << all_price << " $\t" << "7 monthes\t";
}

void Shampoo::Sale()
{
	cout << "Enter the thing of the item you are going to buy" << endl;
	do
	{
		if (thing < 0)
			thing += your_thing;
		cin >> your_thing;
		thing -= your_thing;
		try
		{
			if (thing < 0)
				throw exception("So many items in the store, enter another weight");
			cout << "Price your purchase - " << your_thing * price << " $" << endl;
			cout << "After buy shop have" << endl;
			Print();
		}
		catch (exception& str)
		{
			cout << str.what() << endl;
		}
	} while (thing < 0);
}

void Shampoo::best_before_date(int now_day, int now_month)
{
	now_month -= month;
	if (now_month == 7)
	{
		day -= now_day;
		try
		{
			if (now_day < 1)
				throw exception("Shampoo are damaged");
			cout << "Expiration date Shampoo has not expired" << endl;
			cout << "Shampoo will not be expired yet " << day << " day(s)";
		}
		catch (const exception& str)
		{
			cout << str.what();
		}
	}

	else 
	{
		try
		{
			if (now_month > 7)
				throw exception("Shampoo are damaged");
			cout << "Expiration date Shampoo has not expired" << endl;
			cout << "Shampoo will not be expired yet " << 7 - now_month << " month(s)";
		}
		catch (const exception& str)
		{
			cout << str.what();
		}
	}
	
	
}

Soap::Soap(string name_s, double price, int thing)
{
	this->name_s = name_s;
	this->price = price;
	this->thing = thing;
}

void Soap::Print()
{
	all_price = price * thing;
	cout << name_s << "\t" << price << " $ " << "\t" << thing << " th.\t   " << all_price << " $\t" << "8 monthes\t";
}

void Soap::Sale()
{
	cout << "Enter the thing of the item you are going to buy" << endl;
	do
	{
		if (thing < 0)
			thing += your_thing;
		cin >> your_thing;
		thing -= your_thing;
		try
		{
			if (thing < 0)
				throw exception("So many items in the store, enter another weight");
			cout << "Price your purchase - " << your_thing * price << " $" << endl;
			cout << "After buy shop have" << endl;
			Print();
		}
		catch (exception& str)
		{
			cout << str.what() << endl;
		}
	} while (thing < 0);
}

void Soap::best_before_date(int now_day, int now_month)
{
	now_month -= month;
	if (now_month == 8)
	{
		day -= now_day;
		try
		{
			if (now_day < 1)
				throw exception("Soap are damaged");
			cout << "Expiration date Soap has not expired" << endl;
			cout << "Soap will not be expired yet " << day << " day(s)";
		}
		catch (const exception& str)
		{
			cout << str.what();
		}
	}
	else
	{
		try
		{
			if (now_month > 8)
				throw exception("Soap are damaged");
			cout << "Expiration date Soap has not expired" << endl;
			cout << "Soap will not be expired yet " << 8 - now_month << " month(s)";
		}
		catch (const exception& str)
		{
			cout << str.what();
		}
	}
	
}

Toothpaste::Toothpaste(string name_s, double price, int thing)
{
	this->name_s = name_s;
	this->price = price;
	this->thing = thing;
}

void Toothpaste::Print()
{
	all_price = price * thing;
	cout << name_s << "\t" << price << " $ " << "\t" << thing << " th.\t   " << all_price << " $\t" << "6 monthes\t";
}

void Toothpaste::Sale()
{
	cout << "Enter the thing of the item you are going to buy" << endl;
	do
	{
		if (thing < 0)
			thing += your_thing;
		cin >> your_thing;
		thing -= your_thing;
		try
		{
			if (thing < 0)
				throw exception("So many items in the store, enter another weight");
			cout << "Price your purchase - " << your_thing * price << " $" << endl;
			cout << "After buy shop have" << endl;
			Print();
		}
		catch (exception& str)
		{
			cout << str.what() << endl;
		}
	} while (thing < 0);
}

void Toothpaste::best_before_date(int now_day, int now_month)
{
	now_month -= month;
	if (now_month == 6)
	{
		day -= now_day;
		try
		{
			if (now_day < 1)
				throw exception("Toothpaste are damaged");
			cout << "Expiration date Toothpaste has not expired" << endl;
			cout << "Toothpaste will not be expired yet " << day << " day(s)";
		}
		catch (const exception& str)
		{
			cout << str.what();
		}
	}
	else
	{
		try
		{
			if (now_month >= 6)
				throw exception("Toothpaste are damaged");
			cout << "Expiration date Toothpaste has not expired" << endl;
			cout << "Toothpaste will not be expired yet " << 6 - now_month << " month(s)";
		}
		catch (const exception& str)
		{
			cout << str.what();
		}
	}
	
}

void Shop::Print()
{
	for (size_t i = 0; i < _size; i++)
	{
		cout << i + 1 << "  ";
		arr[i]->Print();
		arr[i]->Show_Date();
		cout << "*********************************************************************************" << endl;
	}
}

Shop::Shop()
{
	arr[0] = new Tomatos("Tomatos   ", 2.73, 14.3);
	arr[1] = new Cucumber("Cucumber", 1.56, 15.4);
	arr[2] = new Salat("Salat   ", 0.98, 12.6);
	arr[3] = new Shampoo("Shampoo   ", 3.56, 120);
	arr[4] = new Soap("Soap       ", 1.01, 56);
	arr[5] = new Toothpaste("Toothpast", 1.32, 86);
}

void Shop::Sale_all()
{
	int q, w;
	do
	{
		do
		{
			cout << "\nChoose a product and press Enter 0 - Tomatos, 1 - Cucumber, 2 - Salat, ";
			cout << "3 - Shampoo, 4 - Soap, 5 - Toothpast" << endl;
			cin >> q;
			try
			{
				if (q < 0 || q > 5)
					throw exception("This number is full, try again");
			}
			catch (exception& str)
			{
				cout << str.what();
			}
		} while (q < 0 || q > 5);
		
		arr[q]->Sale();
		cout << "\n\nIf you wanna buy more product press 1, no 0" << endl;
		cin >> w;

	} while (w == 1);
}

void Shop::best_before_date(int now_day, int now_month)
{
	cout << endl << endl;
	for (size_t i = 0; i < _size; i++)
	{
		arr[i]->best_before_date(now_day, now_month);
		cout << endl;
		cout << "*********************************************************************************" << endl;
	}
}

void Shop::now_day()
{
	do
	{
		cout << "\nEnter present day (day, month, years)" << endl;
		cin >> day >> month >> years; 
		try
		{
			if ((day < 0 || day > 31) && (month < 0 || month > 12) && years < 2022)
				throw exception("Bad all date, try again");
			else if ((day < 0 || day > 31) && (month < 0 || month > 12))
				throw exception("Bad day and month, try again");
			else if ((day < 0 || day > 31) && years < 2022)
				throw exception("Bad day and year, try again");
			else if ((month < 0 || month > 12) && years < 2022)
				throw exception("Bad month and year, try again");
			else if (day < 0 || day > 31)
				throw exception("Bad day, try again");
			else if (month < 0 || month > 12)
				throw exception("Bad month, try again");
			else if (years < 2022)
				throw exception("Bad years, try again");
		}
		catch (exception& str)
		{
			cout << str.what();
		}

	} while (day < 0 || day > 31 || month < 0 || month > 12 || years < 2022);
	
	system("cls");
	if (day < 10 && month < 10)
		cout << "\t\t\t\nPresent day - " << "0" << day << "." << "0" << month << "." << years << endl << endl;
	else if (day < 10)
		cout << "\t\t\t\nPresent day - " << "0" << day << "." << month << "." << years << endl << endl;
	else if (month < 10)
		cout << "\t\t\t\nPresent day - " << day << "." << "0" << month << "." << years << endl << endl;
	else
		cout << "\t\t\t\nPresent day - " << day << "." << month << "." << years << endl << endl;
}

void Shop::offfstream(string str)
{
	ofstream fout;
	fout.open(str);
	try
	{
		if (!fout.is_open())
			throw exception("File is not open");
		else
		{
			cout << "File is open" << endl;
			for (int i = 0; i < _size; i++)
			{
				fout.write((char*)&arr[i], sizeof(Shop));
			}
			cout << "End of write" << endl;
			fout.close();
		}
	}
	catch (const exception& str)
	{
		system("cls");
		cout << str.what() << endl;
	}
}

void Shop::ifffstream(string str)
{
	ifstream fin;
	Shop array;
	/*Commodity** array = new Commodity *[_size];
	array[0] = new Tomatos;
	array[1] = new Cucumber;
	array[2] = new Salat;
	array[3] = new Shampoo;
	array[4] = new Soap;
	array[5] = new Toothpaste;*/
	fin.open(str);
	try
	{
		if (!fin.is_open())
			throw exception("File is not open");
		else
		{
			/*while (fin.read((char*)&array[i], sizeof(Commodity)))
			{
				array[i]->Print();
				array[i]->Show_Date();
				i++;
			}*/
			for (string l; getline(fin, l);)
			{
				array.Print();
			}
			fin.close();
		}
	}
	catch (const exception& str)
	{
		system("cls");
		cout << str.what() << endl;
	}
}


Product::Product(int day)
{
	this->day = day;
}

void Product::Show_Date()
{
	day = rand() % 13 + 1;
	if (day < 10)
		cout << "0" << day << "." << month << "." << years << endl;
	else
		cout << day << "." << month << "." << years << endl;

}

Household_chemicals::Household_chemicals(int day, int month)
{
	this->day = day;
	this->month = month;
}

void Household_chemicals::Show_Date()
{
	day = rand() % 31 + 1;
	month = rand() % 12 + 1;
	if (day < 10 && month < 10)
		cout << "0" << day << "." << "0" << month << "." << years << endl;
	else if (day < 10)
		cout << "0" << day << "." << month << "." << years << endl;
	else if (month < 10)
		cout << day << "." << "0" << month << "." << years << endl;
	else 
		cout << day << "." << month << "." << years << endl;
}

void frame()
{
	cout << "*********************************************************************************" << endl;
	cout << "|| name        ||Price||Weight||  All Price   ||Best before ||Date of delivery ||" << endl;
	cout << "*********************************************************************************" << endl;

}

void gotoxy(short x, short y)
{
	COORD coord = { x, y };
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(h, coord);
}

void show_menu()
{
	system("cls");
	cout << "Print product our shop" << endl;
	cout << "Buy product our shop" << endl;
	cout << "Check expiration date our shop" << endl;
	cout << "****************" << endl;
	cout << "Press ESC to exit" << endl;
}
