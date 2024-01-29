#include "Manager.h"

void Manager::setBonus(float b)
{
    bonus = b;
}

float Manager::getBonus()
{
    return bonus;
}

Manager::Manager():Employee()
{
   
    setBonus(500);
}

Manager::Manager(string name, float salary, float bonus):Employee(name,salary)
{

    setBonus(bonus);
}

void Manager::PrintInfo()
{
   /* cout << "Name:" << getName() << endl;
    cout << "Salary:" << getSalary() << endl;*/

    Employee::PrintInfo();
    cout << "Bonus:" << getBonus() << endl;

}
