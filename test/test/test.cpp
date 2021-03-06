// test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/***************************************************************************/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
/***************************************************************************/
class Money
{
private:
	double dollars;
	double cents;
	double total;                //以cent为单位，拥有的金钱总数
public:
	Money();
	Money(double, double);
	void settotal(double);
	friend Money operator+(Money & m1, Money & m2);
	friend Money operator-(Money & m1, Money & m2);
	void add(int);
	void exchange();       //把cent转化为相应的dollars和cents
	double return_tot();
	double return_dollar();
	double return_cent();
};
/***************************************************************************/
class AnimalFood
{
private:
	int amount;                  //某时刻的食物数量
	int unit_price;              //单价
public:
	AnimalFood(int);
	void set(int, int);                //设置食物的amount和unit_price
	void set(int);                      //设置食物的amount
	void subtract(int);             //当前食物的amount减少的数量
	void add(int);                   //当前食物的amount增加的数量
	int ramount();
};
/***************************************************************************/
class Animal;
class AnimalEnosure
{
private:
	int mess;                //脏乱度
	bool present;                  //当前状况，开还是关
	int days;                          //该围场被关闭的天数
public:
	AnimalEnosure();           //构造函数
	~AnimalEnosure();        //析构函数
	bool judge();                //根据脏乱度判断该围场的开关情况
	void AnimalEat(Animal*, double, double);     //对围场里的动物进行喂食
	void add_days();               //一旦符合条件，则关闭的天数一增加天
	int return_days();              //返回该围场被关闭的天数
};
/***************************************************************************/
class Animal
{
protected:
	double weight;           //单个动物的重量
	double food_amount;       //已经吃过的食物的数量
public:
	virtual bool full() = 0;   //判断该动物是否已经吃饱了
	virtual void Show() = 0; //输出动物的相关信息
	virtual void eat(double) = 0;   //动物被喂食
	virtual const int return_appetite() = 0;
	virtual double return_famount() = 0;
};
/***************************************************************************/
class Elephant :public Animal
{
private:
	double noselength;
	const int appetite;         //大象的食量
public:
	Elephant();
	virtual bool full();             //判断该动物是否已经吃饱了
	virtual void Show();         //输出相关信息
	virtual void eat(double);
	virtual const int return_appetite();
	virtual double return_famount();
};
/***************************************************************************/
class Giraffe :public Animal
{
private:
	double necklength;
public:
	Giraffe();
	virtual bool full();
	virtual void Show();
	virtual void eat(double);
	const int appetite;   //长颈鹿的食量
	virtual const int return_appetite();
	virtual double return_famount();
};
/***************************************************************************/
class Monkey :public Animal
{
private:
	double armlength;
public:
	Monkey();
	virtual bool full();
	virtual void Show();
	virtual void eat(double);
	const int appetite;       //猴子的食量
	virtual const int return_appetite();
	virtual double return_famount();
};
/***************************************************************************/
class Person
{
protected:
	string name;
	int age;
public:
};
/***************************************************************************/
class ZooKeeper :public Person
{
private:
	int days;              //清理围场的天数
public:
	ZooKeeper();
	void add_days();     //每脏乱一次将days加1
	int return_days();
};
/***************************************************************************/
class FoodSeller :public Person
{
private:
	AnimalFood Peanuts;
	AnimalFood Carrots;
	AnimalFood Bananas;
	Money income;
public:
	FoodSeller(int, int, int);
	void setfood();
	void sellpea(int);
	void sellcar(int);
	void sellban(int);
	int return_peanuts();
	int return_carrots();
	int return_bananas();
	void exchange();
	double return_income();
};
/***************************************************************************/
class Visitor :public Person
{
protected:
	string id;                  //游客的ID号码
public:
	string return_id;       //返回游客的ID号码
};
/***************************************************************************/
class Child;
class Adult :public Visitor
{
private:
	Money money;
	Child* childs;
public:
	void setmoney(double);      //设置最初拥有的钱数money
	void setchild(int);                //随同而来的小孩数
	double return_total();
};
/***************************************************************************/
class Child :public Visitor
{
private:
	AnimalFood Peanuts;
	AnimalFood Carrots;
	AnimalFood Bananas;
public:
	Child();
	void setfood(int, int, int);
};
/***************************************************************************/
class Zoo
{
	ZooKeeper a;
	FoodSeller b;
	Adult *c;
	Elephant* e;
	Giraffe* g;
	Monkey* m;
	AnimalEnosure d[3];
	int total_adult;
	int total_child;
public:
	Zoo(int, int, int);
	void simu_oneday();  //模拟任何某一天的经营情况
	bool open();              //判断动物园是否开园
	void simu_whole();   //经营整个动物园的函数
};

/***************************************************************************/
Zoo::Zoo(int x, int y, int z) :b(x, y, z)
{
	total_adult = 0;
	total_child = 0;
	e = new Elephant[1];
	g = new Giraffe[2];
	m = new Monkey[3];
	b.setfood();                         //设置FoodSeller最初拥有的食物总数
}
void Zoo::simu_oneday()
{
	int n;
	srand(int(time(0)));
	n = rand() % 21 + 20;                     //产生每天访问动物园的成年人数（随机产生20到40之间的数）
	total_adult += n;
	c = new Adult[n];                       //动态创建Adult类型的数组
	for (int i = 0; i<n; i++)                  //随机设置每个成年人所拥有的钱数,以及相伴而来的小孩数
	{
		int j, k;
		j = rand() % 11 + 10;                 //money数，（随机产生10到20之间的数）
		k = rand() % 3 + 1;                    //随同而来的小孩数
		total_child += k;
		c[i].setmoney(j - 1 - 0.4*k);     //设置成年人能用来买AnimalFood的钱数（已付完门票费用后）
		c[i].setchild(k);                    //设置每个成年人带来的小孩数 
		int m_food = int(j - 1 - 0.4*k);  //money to buy food
		int foodnum = m_food;        //由于将平均购买AnimalFood,所以各种食物数量相等，由于0.5+0.3+0.2=1,所以每1dollar买到三种食物各一件
		b.sellpea(foodnum);
		b.sellcar(foodnum);
		b.sellban(foodnum);           //FoodSeller售出食物，并赚得相应的钱
		for (int i = 0; i<1; i++)
			d[0].AnimalEat(&e[i], 1, foodnum);
		for (int i = 0; i<2; i++)
			d[1].AnimalEat(&g[i], 2, foodnum);
		for (int i = 0; i<3; i++)
			d[2].AnimalEat(&m[i], 3, foodnum);    //分给动物们吃,并且对各自围场里的mess进行相应改变
		for (int f = 0; f<3; f++)
		{
			if (d[f].judge())
			{
				cout << f + 1 << "号围场由于过于脏乱，亟待清扫，故今天关闭一天！" << endl;
				d[f].add_days();
				a.add_days();
			}
		}
		if (a.return_days() >= 10)
		{
			break;
		}
		if (b.return_peanuts() <= 0)
		{
			break;                                                 //一旦卖完，跳出当前循环
		}
		if (b.return_carrots() <= 0)
		{
			break;                                                 //一旦卖完，跳出当前循环
		}
		if (b.return_bananas() <= 0)
		{
			break;                                                 //一旦卖完，跳出当前循环
		}
	}
}
bool Zoo::open()
{
	if (a.return_days() >= 10)
	{
		cout << "The zoo closed because the zoo keeper had enough of cleaning and quit!" << endl << endl;
		return false;
	}
	if (b.return_peanuts() <= 0)
	{
		cout << "The zoo closed because the seller ran out of peanuts." << endl << endl;
		return false;
	}
	if (b.return_carrots() <= 0)
	{
		cout << "The zoo closed because the seller ran out of carrots." << endl << endl;
		return false;
	}
	if (b.return_bananas() <= 0)
	{
		cout << "The zoo closed because the seller ran out of bananas." << endl << endl;
		return false;
	}
	return true;
}
void Zoo::simu_whole()
{
	int days = 0;
	cout << "This is a simulation of a small zoo!" << endl;
	cout << "总共有三个围场，1号围场里有一头大象，2号围场里有两头长颈鹿，三号围场里有三只猴子" << endl << endl;
	while (open())
	{
		days++;
		cout << "这是动物园的第*****" << days << "*****天" << endl << endl;
		simu_oneday();
	}
	b.exchange();         //计算出foodseller的总收入，换化成dollars和cents数
	cout << "动物园总向公众共开放了*****" << days << "*****天" << endl << endl;
	cout << "这期间所有的成年人访客有*****" << total_adult << "*****位" << endl << endl;
	cout << "这期间所有的小孩访客有*****" << total_child << "*****位" << endl << endl;
	cout << "这期间FoodSeller的收入为*****" << b.return_income() << "******dollars" << endl << endl;
	cout << "这期间ZooKeeper清扫的天数为*****" << a.return_days() << "*****天" << endl << endl;
}
/***************************************************************************/
Money::Money(double d, double c)
{
	dollars = d;
	cents = c;
	total = dollars + 100 * cents;
}
Money::Money()
{
	total = 0;
}
void Money::settotal(double a)
{
	total = a;
}
double Money::return_tot()
{
	return total;
}
void Money::add(int m)
{
	total += m;
}
Money operator + (Money & m1, Money & m2)
{
	double t = m1.total + m2.total;
	double d, c;
	d = int(t / 100);
	c = (t - 100 * d);
	return Money(d, c);
}
Money operator - (Money & m1, Money & m2)
{
	double t = m1.total - m2.total;
	double d, c;
	d = int(t / 100);
	c = (t - 100 * d);
	return Money(d, c);
}
void Money::exchange()
{
	dollars = int(total / 100);
	cents = total - 100 * dollars;
}
double Money::return_dollar()
{
	return dollars;
}
double Money::return_cent()
{
	return cents;
}
/***************************************************************************/
AnimalFood::AnimalFood(int n)
{
	amount = n;
}
void AnimalFood::set(int a, int p)
{
	amount = a;
	unit_price = p;
}
void AnimalFood::set(int a)
{
	amount = a;
}
int AnimalFood::ramount()
{
	return amount;
}
void AnimalFood::subtract(int n)   //食物售出的数量为n，相应的减去n
{
	amount -= n;
}
void AnimalFood::add(int n)      //食物买进（或得到）的数量为n，相应的加上n
{
	amount += n;
}
/***************************************************************************/
AnimalEnosure::AnimalEnosure()
{
	mess = 0;
	present = true;
	days = 0;
}
AnimalEnosure::~AnimalEnosure()
{
}
void AnimalEnosure::AnimalEat(Animal* a, double n, double m)  //n为该围场里动物的个数，m为一次喂给动物的总食量
{
	a->eat(m / n);           //(m/n)表示将动物食物平均分给动物吃
	if (a->full())            //一旦吃饱了，mess增加相应值
	{
		mess = mess + a->return_appetite();
	}
}
bool AnimalEnosure::judge()
{
	if (mess>2000)
	{
		mess = 0;
		return true;
	}
	else
		return false;
}
void AnimalEnosure::add_days()
{
	days++;
}
/***************************************************************************/
bool Elephant::full()
{
	if (food_amount>appetite)
	{
		food_amount -= appetite;
		return true;
	}
	else
		return false;
}
Elephant::Elephant() :appetite(750)
{
	food_amount = 0;
}
void Elephant::eat(double n)              //n单位食物给动物Elephant吃
{
	food_amount += n;
}
void Elephant::Show()
{
	cout << "The weight of this elephant is " << weight << endl;
	cout << "The length of this elephant's nose is " << noselength << endl;
}
const int Elephant::return_appetite()
{
	return appetite;
}
double Elephant::return_famount()
{
	return food_amount;
}
/***************************************************************************/
Giraffe::Giraffe() :appetite(500)
{
	food_amount = 0;
}
void Giraffe::eat(double n)              //n单位食物给动物Giraffe吃
{
	food_amount += n;
}
bool Giraffe::full()
{
	if (food_amount>appetite)
	{
		food_amount -= appetite;
		return true;
	}
	else
		return false;
}
void Giraffe::Show()
{
	cout << "The weight of this Giraffe is " << weight << endl;
	cout << "The length of this Giraffe's neck is " << necklength << endl;
}
const int Giraffe::return_appetite()
{
	return appetite;
}
double Giraffe::return_famount()
{
	return food_amount;
}
/***************************************************************************/
Monkey::Monkey() :appetite(300)
{
	food_amount = 0;
}
void Monkey::eat(double n)              //n单位食物给动物Monkey吃
{
	food_amount += n;
}
bool Monkey::full()
{
	if (food_amount>appetite)
	{
		food_amount -= appetite;
		return true;
	}
	else
		return false;
}
void Monkey::Show()
{
	cout << "The weight of this Monkey is " << weight << endl;
	cout << "The length of this Monkey's arm is " << armlength << endl;
}
const int Monkey::return_appetite()
{
	return appetite;
}
double Monkey::return_famount()
{
	return food_amount;
}
/***************************************************************************/
ZooKeeper::ZooKeeper()
{
	days = 0;
}
void ZooKeeper::add_days()
{
	days++;
}
int ZooKeeper::return_days()
{
	return days;
}
/***************************************************************************/
FoodSeller::FoodSeller(int a, int b, int c) :Peanuts(a), Carrots(b), Bananas(c)
{
}
void FoodSeller::setfood()
{
	Peanuts.set(10000, 20);
	Carrots.set(7000, 30);
	Bananas.set(4000, 50);
}
void FoodSeller::sellpea(int n)
{
	Peanuts.subtract(n);
	income.add(n * 20);
}
void FoodSeller::sellcar(int n)
{
	Carrots.subtract(n);
	income.add(n * 30);
}
void FoodSeller::sellban(int n)
{
	Bananas.subtract(n);
	income.add(n * 50);
}
int FoodSeller::return_peanuts()          //返回当前拥有的Peanuts数目
{
	return Peanuts.ramount();
}
int FoodSeller::return_carrots()            //返回当前拥有的Carrots数目
{
	return Carrots.ramount();
}
int FoodSeller::return_bananas()          //返回当前拥有的Bananas数目
{
	return Bananas.ramount();
}
void FoodSeller::exchange()
{
	income.exchange();
}
double FoodSeller::return_income()
{
	double a;
	a = income.return_tot() / 100;
	return a;
}
/***************************************************************************/
void Child::setfood(int a, int b, int c)
{
	Peanuts.set(a);
	Carrots.set(b);
	Bananas.set(c);
}
Child::Child() :Peanuts(0), Carrots(0), Bananas(0)
{}
/***************************************************************************/
void Adult::setchild(int n)
{
	childs = new Child[n];
}
void Adult::setmoney(double a)  //a的单位是dollar，在函数里被转换成cent,然后设置为total的值
{
	money.settotal(a * 100);
}
double Adult::return_total()
{
	return money.return_tot();
}
int main()
{
	Zoo zoo(10000, 7000, 4000);
	zoo.simu_whole();
}

