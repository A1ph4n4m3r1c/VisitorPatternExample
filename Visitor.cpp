#include "Visitor.hpp"


void PrintClassNameVisitor::PrintRectangleName(Rectangle* rect)
{
    std::cout << "\n" << rect->GetNameRectName() << "\n";
}

void PrintClassNameVisitor::PrintAnimalName(Animal* animal)
{
    std::cout << "\n" << animal->GetAnimalName() << "\n";
}

std::string Rectangle::GetNameRectName()
{
    return name;
}

void Rectangle::Accept(PrintClassNameVisitor v)
{
    v.PrintRectangleName(this);
}

std::string Animal::GetAnimalName()
{
    return name;
}

void Animal::Accept(PrintClassNameVisitor v)
{
    v.PrintAnimalName(this);
}