//////////////////////////////////////
//	Caitlin J. Corbin				//
//	M05 Programming Assignment		//
//	"Beverages Hierarchy"			//
//////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

// Beverage parent class
class Beverage { 
protected:
	string drinkName;
	string description;
	string servingSize;
	int calories;
	double drinkPrice;
public:
	// Constructor
	Beverage(string drinkName, string description, string servingSize, int calories, double drinkPrice) {
		this->drinkName = drinkName;
		this->description = description;
		this->servingSize = servingSize;
		this->calories = calories;
		this->drinkPrice = drinkPrice;
	};
	
	~Beverage()
	{
		cout << "Destroying ~ Beverage" << endl;
	};

	// Prints drink information
	void drinkInfo() { 
		cout << "Drink name: " << drinkName << endl;
		cout << "Description: " << description << endl;
		cout << "Serving Size: " << servingSize << endl;
		cout << "Calories: " << calories << endl;
		cout << "Price: " << drinkPrice << endl;
	}
};

// Child class of Beverage
class Coffee : public Beverage { 
protected:
	string hotCold;
	string drinkType;
	string creamer;
	string sweetener;
	string strength;
	string caffeine;
public:
	// Constructor
	Coffee(string drinkName, string description, string servingSize, int calories, double drinkPrice, 
		string hotCold, string drinkType, string creamer, string sweetener, string strength, string caffeine) :
		Beverage( drinkName, description, servingSize, calories, drinkPrice) {
		this->hotCold = hotCold;
		this->drinkType = drinkType;
		this->creamer = creamer;
		this->sweetener = sweetener;
		this->strength = strength;
		this->caffeine = caffeine;
	};

	~Coffee()
	{
		cout << "Destroying ~ Coffee" << endl;
	};

	// Prints drink information
	void drinkInfo() {
		cout << "Drink name: " << drinkName << endl;
		cout << "Description: " << description << endl;
		cout << "Serving Size: " << servingSize << endl;
		cout << "Calories: " << calories << endl;
		cout << "Price: " << drinkPrice << endl;
		cout << "Hot / Cold: " << hotCold << endl;
		cout << "Roast: " << drinkType << endl;
		cout << "Creamer: " << creamer << endl;
		cout << "Sweetener: " << sweetener << endl;
		cout << "Strength: " << strength << endl;
		cout << "Caffeine: " << caffeine << endl;
	}
};

// Child class of Beverage
class Tea : public Beverage { 
protected:
	string hotCold;
	string drinkType;
	string creamer;
	string sweetener;
	string lemon;
public:
	// Constructor
	Tea(string drinkName, string description, string servingSize, int calories, double drinkPrice,
		string hotCold, string drinkType, string creamer, string sweetener, string lemon) :
		Beverage(drinkName, description, servingSize, calories, drinkPrice) {
		this->hotCold = hotCold;
		this->drinkType = drinkType;
		this->creamer = creamer;
		this->sweetener = sweetener;
		this->lemon = lemon;
	};

	~Tea()
	{
		cout << "Destroying ~ Tea" << endl;
	};

	// Prints drink information
	void drinkInfo() {
		cout << "Drink name: " << drinkName << endl;
		cout << "Description: " << description << endl;
		cout << "Serving Size: " << servingSize << endl;
		cout << "Calories: " << calories << endl;
		cout << "Price: " << drinkPrice << endl;
		cout << "Hot / Cold: " << hotCold << endl;
		cout << "Roast: " << drinkType << endl;
		cout << "Creamer: " << creamer << endl;
		cout << "Sweetener: " << sweetener << endl;
		cout << "Lemon: " << lemon << endl;
	};
};

// Child class of Beverage
class Soda : public Beverage { 
private:
	string drinkBrand;
	string type;
	string diet;
public:
	// Constructor
	Soda(string drinkName, string description, string servingSize, int calories, double drinkPrice,
		string drinkBrand, string type, string diet) :
		Beverage(drinkName, description, servingSize, calories, drinkPrice) { 
		this->drinkBrand = drinkBrand;
		this->type = type;
		this->diet = diet;
	}

	~Soda()
	{
		cout << "Destroying ~ Soda" << endl;
	};

	// Prints drink information
	void drinkInfo() {
		cout << "Drink name: " << drinkName << endl;
		cout << "Description: " << description << endl;
		cout << "Serving Size: " << servingSize << endl;
		cout << "Calories: " << calories << endl;
		cout << "Price: " << drinkPrice << endl;
		cout << "Brand: " << drinkBrand << endl;
		cout << "Drink Type: " << type << endl;
		cout << "Diet: " << diet << endl;
	};
};

// Child class of Beverage
class energyDrink : public Beverage{
protected:
	string drinkBrand;
	string stimulant;
	string sweetener;
public:
	// Constructor
	energyDrink(string drinkName, string description, string servingSize, int calories, double drinkPrice,
		string drinkBrand, string stimulant, string sweetener) :
		Beverage(drinkName, description, servingSize, calories, drinkPrice) {
		this->drinkBrand = drinkBrand;
		this->stimulant = stimulant;
		this->sweetener = sweetener;
	};

	~energyDrink()
	{
		cout << "Destroying ~ Energy Drink" << endl;
	};

	// Prints drink information
	void drinkInfo() {
		cout << "Drink name: " << drinkName << endl;
		cout << "Description: " << description << endl;
		cout << "Serving Size: " << servingSize << endl;
		cout << "Calories: " << calories << endl;
		cout << "Price: " << drinkPrice << endl;
		cout << "Brand: " << drinkBrand << endl;
		cout << "Stimulant: " << stimulant << endl;
		cout << "Sweetener: " << sweetener << endl;
	};
};

int main() {

	// Objects
	Coffee draftLatte("Draft Latte", "Creamy drink with milk infusion", "Large", 
		110, 3.00, "Cold", "Medium", "Cream", "Sweetened", "Not strong", "Caffeine");

	Tea jasmineTea("Blissful Jasmine", "Made with flowers from Japan", "Medium", 
		0, 1.50, "Cold", "Herbal", "No creamer", "Sweetened", "No lemon");

	Soda cokeZero("Coke Zero", "All the flavor of a coke with none of the calories!",
		"Large", 0, 1.00, "Coca-Cola", "Cola", "Diet");

	energyDrink monster("La Rosa Monster", "The energy of roses", "Large", 10,
		2.00, "Monster", "Caffeine", "Sweetened");

	// Prints info
	draftLatte.drinkInfo();
	cout << endl;
	jasmineTea.drinkInfo();
	cout << endl;
	cokeZero.drinkInfo();
	cout << endl;
	monster.drinkInfo();

	//End
	system("pause>0");
}