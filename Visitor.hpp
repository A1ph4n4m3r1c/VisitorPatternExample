
#include <iostream>

class Rectangle;
class Animal;
class PrintClassNameVisitor;

class PrintClassNameVisitor
{
public:
    void PrintRectangleName(Rectangle* rect);
    void PrintAnimalName(Animal* animal);
};

class Rectangle 
{
    int width;
    int length;
    std::string name;

public:
    Rectangle(int width_, int length_, std::string name_): width{width_}, length{length_}, name{name_}  {}

    std::string GetNameRectName();
    void Accept(PrintClassNameVisitor v);
};

class Animal 
{
    int age;
    int weight;
    std::string name;

public:
    Animal(int age_, int weight_, std::string name_): age{age_}, weight{weight_}, name{name_}  {}
    
    std::string GetAnimalName();
    void Accept(PrintClassNameVisitor v);
};

