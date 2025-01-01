#include <iostream>

template <class T>
class ScopeResolution
{
private:
    T scope;

public:
    ScopeResolution(T s);
    T getScope();
};

template <class T>
ScopeResolution<T>::ScopeResolution(T s)
{
    this->scope = s;
}

template <class T>
T ScopeResolution<T>::getScope()
{
    return this->scope;
}

int main()
{
    ScopeResolution<int> sc(19);
    std::cout << sc.getScope();
}