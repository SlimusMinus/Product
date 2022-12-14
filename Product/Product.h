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
protected:
	string name_s;
	double price;
	double weight;
	double all_price;
	double your_weight = 0;
	int day;
	int month;
	int years;
public:
	virtual void Print() = 0;
	virtual void Show_Date() = 0;
	virtual void Sale() = 0;
	virtual void best_before_date(int now_day, int now_month) = 0;
	friend ostream& operator<<(ostream& os, Commodity& sh);
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
	friend ostream& operator<<(ostream& os, Commodity& sh);
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
	friend ostream& operator<<(ostream& os, Commodity& sh);
};

class Tomatos : public Product
{
public:
	Tomatos() { name_s = price = weight = 0; }
	Tomatos(string name_s, double price, double weight);
	void Print() override;
	void Sale() override;
	void best_before_date(int now_day, int now_month) override;
	
};

class Cucumber : public Product
{
public:
	Cucumber() { name_s = price = weight = 0; }
	Cucumber(string name_s, double price, double weight);
	void Print() override;
	void Sale() override;
	void best_before_date(int now_day, int now_month) override;

};

class Salat : public Product
{
public:
	Salat() { name_s = price = weight = 0; }
	Salat(string name_s, double price, double weight);
	void Print() override;
	void Sale() override;
	void best_before_date(int now_day, int now_month) override;
};

class Shampoo : public Household_chemicals
{
public:
	Shampoo() {}
	Shampoo(string name_s, double price, double weight);
	void Print() override;
	void Sale() override;
	void best_before_date(int now_day, int now_month) override;
	
};

class Soap : public Household_chemicals
{

public:
	Soap() { }
	Soap(string name_s, double price, double weight);
	void Print() override;
	void Sale() override;
	void best_before_date(int now_day, int now_month) override;
	
};

class Toothpaste : public Household_chemicals
{
public:
	Toothpaste() {}
	Toothpaste(string name_s, double price, double weight);
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
	friend ostream& operator<<(ostream& os, Commodity& sh)
	{
		os << sh.name_s << sh.price << sh.weight << sh.all_price
			<< sh.day << sh.month << sh.years;
		return os;
	}
};

void frame();
void gotoxy(short x, short y);
void show_menu();
