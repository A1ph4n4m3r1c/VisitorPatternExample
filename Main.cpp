#include "Visitor.hpp"

int main()
{
    Animal myAnimal {32,134, "Stephen"};

    Rectangle myRectangle {5,6, "Recty"};

    PrintClassNameVisitor visitor {};

    myAnimal.Accept(visitor);

    myRectangle.Accept(visitor);
}

