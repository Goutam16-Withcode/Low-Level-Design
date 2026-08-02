#include <bits/stdc++.h>
using namespace std;

class Burger
{
public:
    virtual void prepare() = 0;
    virtual ~Burger() {}
};

class BasicBurger : public Burger
{
public:
    void prepare() override
    {
        cout << "Prepare the basic burger!!!" << endl;
    }
};

class StandardBurger : public Burger
{
public:
    void prepare() override
    {
        cout << "Prepare the standard burger!!!" << endl;
    }
};

class PerimumBurger : public Burger
{
public:
    void prepare() override
    {
        cout << "Prepare the perimum burger!!!" << endl;
    }
};

class BurgerFactory
{
public:
    unique_ptr<Burger> createBurger(string &type)
    {
        if (type == "basic")
            return make_unique<BasicBurger>();
        else if (type == "standard")
            return make_unique<StandardBurger>();
        else if (type == "perimum")
            return make_unique<PerimumBurger>();

        return nullptr;
    }
};

int main()
{
    string type = "standard";

    BurgerFactory myburger;
    unique_ptr<Burger> burger = myburger.createBurger(type);

    if (burger)
    {
        burger->prepare();
    }

    return 0;
}