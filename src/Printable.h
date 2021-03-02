# include <iostream>
class Printable
{
public:
    //pure virtual functions, ensure subclass implement this method.
    virtual std::string GetClassName() const = 0;
};