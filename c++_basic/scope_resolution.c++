#include<iostream>

class ScopeResolution
{
private:
    int scope;

public:
    ScopeResolution(int s);
    int getScope();
};

ScopeResolution::ScopeResolution(int s)
{
    this->scope = s;
}

int ScopeResolution::getScope()
{
    return this->scope;
}

int main()
{
    ScopeResolution sc(20);
    std::cout<<sc.getScope();
}