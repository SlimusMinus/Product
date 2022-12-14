#include <iostream>
#include <ctime>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include <io.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
const int _size = 6;
class Commodity
{
public:
	virtual void Print() = 0;
	virtual void Show_Date() = 0;
	virtual void Sale() = 0;
	virtual void best_before_date(int now_day, int now_month) = 0;
};

class Product : public Commodity
{
protected:
	int day;
	int month = 12;
	int years = 2022;
public:
	Product() { day = 0; }
	Product(int day);
	void Show_Date() override;
};

class Household_chemicals : public Commodity
{
protected:
	int day;
	int month;
	int years = 2022;
public:
	Household_chemicals() { day = month = 0; }
	Household_chemicals (int day, int month);
	void Show_Date() override;
};

class Tomatos : public Product
{
protected:
	string name_s;
	double price;
	double weight;
	double all_price;
	double your_weight = 0;
public:
	Tomatos() { name_s = price = weight = 0; }
	Tomatos(string name_s, double price, double weight);
	void Print() override;
	void Sale() override;
	void best_before_date(int now_day, int now_month) override;
	
};

class Cucumber : public Product
{
protected:
	string name_s;
	double price;
	double weight;
	double all_price;
	double your_weight = 0;
	void best_before_date(int now_day, int now_month) override;

public:
	Cucumber() { name_s = price = weight = 0; }
	Cucumber(string name_s, double price, double weight);
	void Print() override;
	void Sale() override;
	
};

class Salat : public Product
{
protected:
	string name_s;
	double price;
	double weight;
	double all_price;
	double your_weight = 0;
public:
	Salat() { name_s = price = weight = 0; }
	Salat(string name_s, double price, double weight);
	void Print() override;
	void Sale() override;
	void best_before_date(int now_day, int now_month) override;
};

class Shampoo : public Household_chemicals
{
protected:
	string name_s;
	double price;
	int thing;
	double all_price;
	int your_thing = 0;
public:
	Shampoo() { name_s = price = thing = 0; }
	Shampoo(string name_s, double price, int thing);
	void Print() override;
	void Sale() override;
	void best_before_date(int now_day, int now_month) override;
	
};

class Soap : public Household_chemicals
{
protected:
	string name_s;
	double price;
	int thing;
	double all_price;
	int your_thing = 0;
public:
	Soap() { name_s = price = thing = 0; }
	Soap(string name_s, double price, int thing);
	void Print() override;
	void Sale() override;
	void best_before_date(int now_day, int now_month) override;
	
};

class Toothpaste : public Household_chemicals
{
protected:
	string name_s;
	double price;
	int thing;
	double all_price;
	int your_thing = 0;

public:
	Toothpaste() { name_s = price = thing = 0; }
	Toothpaste(string name_s, double price, int thing);
	void Print() override;
	void Sale() override;
	void best_before_date(int now_day, int now_month) override;
	
};

class Shop : public Toothpaste, Soap, Shampoo, Salat, Cucumber, Tomatos
{
	int day;
	int month;
	int years;
	Commodity** arr = new Commodity *[_size];
public:
	Shop();
	void Print();
	void Sale_all();
	void best_before_date(int now_day, int now_month);
	void now_day();
	int Get_day() { return day; }
	int Get_month() { return month; }
	void offfstream(string str);
	void ifffstream(string str);
	/*friend ostream& operator<<(ostream& os, Shop& st)
	{
		os << st.day << st.month << st.years;
		return os;
	}*/
};

void frame();
void gotoxy(short x, short y);
void show_menu();
