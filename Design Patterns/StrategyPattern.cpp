#include <iostream.h>
#include <fstream.h>
#include <string.h>

//  context class

// The Strategy Pattern involves three main parts:
// Context:(Client) References a Strategy object. It interacts with the strategy via its interface,
// but does not know the concrete implementation of the strategy.

// Strategy (Interface/Abstract Class): A common interface for all supported strategies.
// The Context uses this interface to call the algorithm defined by a Concrete Strategy.

// Concrete Strategy: Implements the Strategy interface, providing a specific algorithm or behavior.

// Super Class
class Duck
{
public:
    // Behaviours are defined as interfaces(Strategies) instead of concrete methods below.
    virtual void performFly() = 0;   // ❌
    virtual void performQuack() = 0; // ❌
    virtual void display() = 0;      // ❌

    IFlyBehaviour *flyBehavior;         // ✅
    IQuackBehaviour *quackBehavior;     // ✅
    IDisplayBehaviour *displayBehavior; // ✅

public
    Duck(IFlyBehaviour *fb, IQuackBehaviour *qb, IDisplayBehaviour *db) // Constructor
    //: flyBehavior(fb), quackBehavior(qb), displayBehavior(db)
    {
        this->flyBehavior = fb;
        this->quackBehavior = qb;
        this->displayBehavior = db;
    }

public
    void Fly()
    {   
        this->flyBehavior->fly();  // Call Fly method of the strategy
    }

    virtual ~DuckClass() = default;
}

// Types of Ducks / Strategies :
// is-a -- composistion  --|>
// has-a -- inheritance  -->
// Here, Duck has-a CityDuck , WildDuck , ToyDuck ....
// while CityDuck , WildDuck , ToyDuck is-a type of Duck (is-a).

class CityDuck : public Duck
{
public:
    void performFly() override
    {
        std::cout << "CityDuck flies short distances." << std::endl;
    }
    void performQuack() override
    {
        std::cout << "CityDuck quacks loudly." << std::endl;
    }
}

class WildDuck : public Duck
{
public:
    void performFly() override
    {
        std::cout << "WildDuck flies long distances." << std::endl;
    }
    void performQuack() override
    {
        std::cout << "WildDuck quacks softly." << std::endl;
    }
}



 
 Class Explosion:
Use a Factory or Builder:

Class Explosion:
Use a Factory or Builder:



Have a Resolver class, which will return the desired strategy based on some input criteria.
Have a Interface for checking if it is valid to use that strategy.
-- ISwitchable
-- IValidatable
-- IMovable
-- ITurnable
-- IDamageable
-- ICollectable

These above checkers and resolvers can be used in multiple design patterns.

and then inherited and implemented into the Class needing those strategies. , which will mix and match what it needs.



// Context:

// Interfaces:
// IPaymentStrategy:

// Strategies:

// class CCPaymentStrategy {
// public:
//     virtual void pay(int amount) = 0; // Pure virtual function
//     virtual ~CCPaymentStrategy() = default; // Virtual destructor for proper cleanup
// };

// class PayPalPaymentStrategy : public CCPaymentStrategy {
// private:
//     std::string email;
//     std::string password;   
// public:
//     PayPalPaymentStrategy(const std::string& email, const std::string& password)    
//         : email(email), password(password) {}       

// }
