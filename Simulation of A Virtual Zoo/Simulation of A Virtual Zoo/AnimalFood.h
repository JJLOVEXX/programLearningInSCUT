#pragma once
class AnimalFood
{
public:
	AnimalFood();
	AnimalFood(unsigned int);
	void AnimalFoodFoodSellerSetting(double,double);
	void AnimalFoodChildSetting(double);
	void AnimalFoodSubtract(unsigned int);
	void AnimalFoodAdd(unsigned int);
	unsigned int AnimalFoodRemain()const;
	~AnimalFood();
private:
	unsigned int amount;
	double pricePerUnit;
};

