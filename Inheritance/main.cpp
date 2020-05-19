#include <iostream>

using namespace std;

class Chef{
private:
    int age;
public:
    string name;

    chefDescription(string aName, int aAge){
    name = aName;
    setAge(aAge);
    }

    //setter
    void setAge(int aAge){
    if(aAge > 16 && aAge < 70){
        age = aAge;
    }else{
        age = aAge;
        cout << "WARNING! " << name << " should not be working due to age" << endl;
    }
    }

    int getAge(){
    return age;
    }
};

class BegginerChef : public Chef{
public:
    //Functions
    void makeSalad(){
    cout << "Chef " << name << " " << getAge() << " prepares salad" << endl;
    }

    void makeChips(){
    cout << "Chef " << name << " " << getAge() << " prepares chips" << endl;
    }

    void makeBestDish(){
    cout << "Chef " << name << " " << getAge() << " prepares burger" << endl;
    }

    //compile time polymorphism
    void mealCost(int costToMake, int profitCharge){
    int bill = costToMake + profitCharge;
    cout << "Cost of Meal: \x9C" << bill << endl;
    }

    void mealCost(double costToMake, double profitCharge){
    double bill = costToMake + profitCharge;
    cout << "Cost of Meal: \x9C" << bill << endl;
    }
};

class IntermediateChef : public BegginerChef{
public:
    void makeCurlyChips(){
    cout << "Chef " << name << " " << getAge() << " prepares curly chips" << endl;
    }

    void makePasta(){
    cout << "Chef " << name << " " << getAge() << " prepares pasta" << endl;
    }

    //runtime polymorphism
    void makeBestDish(){
    cout << "Chef " << name << " " << getAge() << " prepares Carbonara" << endl;
    }
};

class AdvancedChef : public IntermediateChef{
public:
    void makePotatoGratin(){
    cout << "Chef " << name << " " << getAge() << " prepares potato gratin" << endl;
    }

    //runtime polymorphism
    void makeBestDish(){
    cout << "Chef " << name << " " << getAge() << " prepares monk fish" << endl;
    }
};

int main()
{
    BegginerChef chef1;
    IntermediateChef chef2;
    AdvancedChef chef3;
    chef1.chefDescription("Conor", 15);
    chef2.chefDescription("Jamie", 35);
    chef3.chefDescription("Gordon", 40);

    chef1.makeChips();
    chef1.makeBestDish();
    chef1.mealCost(7, 3);

    chef2.makeChips();
    chef2.makeBestDish();
    chef2.mealCost(10.43, 4.5);

    chef3.makeSalad();
    chef3.makePotatoGratin();
    chef3.makeBestDish();
    chef3.mealCost(10.00, 7.5);
    return 0;
}
