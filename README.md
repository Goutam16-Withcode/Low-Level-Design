# Low Level Design Patterns in C++

This repository contains C++ examples of common low-level design concepts and object-oriented design patterns. It is intended for learning, interview preparation, and practicing software design.

## What this repository covers

The examples are grouped by pattern family and include both classic Gang of Four (GoF) patterns and practical LLD-style implementations.

### Creational patterns
- Singleton
- Factory Method
- Abstract Factory
- Builder
- Prototype

### Structural patterns
- Adapter
- Bridge
- Composite
- Decorator
- Facade
- Proxy
- Flyweight

### Behavioral patterns
- Chain of Responsibility
- Command
- Iterator
- Observer
- Strategy
- Template Method

### Additional practice area
- Food delivery design examples

## Repository structure

- [adapter-deisgn](adapter-deisgn) — Adapter pattern example
- [bridge-design-pattern](bridge-design-pattern) — Bridge pattern example
- [builder-desin](builder-desin) — Builder pattern examples and variations
- [chainofresponsibility](chainofresponsibility) — Chain of Responsibility example
- [command-design-pattern](command-design-pattern) — Command pattern example
- [composite-pattern](composite-pattern) — Composite pattern example
- [decorator-pattern](decorator-pattern) — Decorator pattern example
- [facade-pattern](facade-pattern) — Facade pattern example
- [factory-design](factory-design) — Factory, abstract factory, and simple factory examples
- [flyweight-deisgn-pattern](flyweight-deisgn-pattern) — Flyweight pattern example with and without optimization
- [Food-delivery](Food-delivery) — Additional design practice area
- [iterator-design-pattern](iterator-design-pattern) — Iterator pattern examples
- [observer-design-pattern](observer-design-pattern) — Observer pattern example
- [prototype-design](prototype-design) — Prototype pattern examples
- [proxy-design-pattern](proxy-design-pattern) — Protection, Remote, and Virtual Proxy examples
- [Singleton-design](Singleton-design) — Multiple Singleton implementations
- [streategy-design-pattern](streategy-design-pattern) — Strategy pattern example
- [TemplateMethodPattern](TemplateMethodPattern) — Template Method pattern example

## Example files

A few representative files include:

- [adapter-deisgn/adapter-design.cpp](adapter-deisgn/adapter-design.cpp)
- [builder-desin/builder.cpp](builder-desin/builder.cpp)
- [builder-desin/builderwithdirector.cpp](builder-desin/builderwithdirector.cpp)
- [bridge-design-pattern/BridgePattern.cpp](bridge-design-pattern/BridgePattern.cpp)
- [chainofresponsibility/COR.cpp](chainofresponsibility/COR.cpp)
- [command-design-pattern/command.cpp](command-design-pattern/command.cpp)
- [composite-pattern/composite-design-pattern.cpp](composite-pattern/composite-design-pattern.cpp)
- [factory-design/abstract_factory.cpp](factory-design/abstract_factory.cpp)
- [factory-design/factory_method.cpp](factory-design/factory_method.cpp)
- [iterator-design-pattern/with_iterator.cpp](iterator-design-pattern/with_iterator.cpp)
- [observer-design-pattern/ObserverDesignPattern.cpp](observer-design-pattern/ObserverDesignPattern.cpp)
- [proxy-design-pattern/ProtectionProxy.cpp](proxy-design-pattern/ProtectionProxy.cpp)
- [Singleton-design/eagr_initilization.cpp](Singleton-design/eagr_initilization.cpp)
- [streategy-design-pattern/StrategyDesignPattern.cpp](streategy-design-pattern/StrategyDesignPattern.cpp)
- [TemplateMethodPattern/TemplateMethodPattern.cpp](TemplateMethodPattern/TemplateMethodPattern.cpp)

## How to run

Each example is a standalone C++ file. You can compile and run it with g++ from the repository root.

### Example on Windows PowerShell

`powershell
g++ .\command-design-pattern\command.cpp -o .\command
.\command
`

You can replace the source path with any other example file to try a different pattern.

## Notes

- Some folder names contain spelling variations such as "builder-desin" and "adapter-deisgn".
- This repository is best used as a practical reference for understanding pattern implementations in C++.
- Feel free to explore the folders, modify the code, and practice by adding your own examples.
