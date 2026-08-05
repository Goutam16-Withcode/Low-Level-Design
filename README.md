# Low Level Design Patterns in C++

This repository contains a collection of Low Level Design (LLD) and object-oriented design pattern examples implemented in C++. It is intended for learning, interview preparation, and practicing common software design concepts.

## What this repository covers

The examples are grouped by classic design pattern categories and include both GoF patterns and commonly used LLD patterns.

### Creational Patterns
- Singleton
- Factory Method
- Abstract Factory
- Builder
- Prototype

### Structural Patterns
- Adapter
- Bridge
- Composite
- Decorator
- Facade
- Proxy
- Flyweight

### Behavioral Patterns
- The repository currently focuses mainly on structural and creational examples, and more behavioral patterns can be added over time.

## Folder overview

- [adapter-deisgn](adapter-deisgn) - Adapter pattern example
- [builder-desin](builder-desin) - Builder pattern examples
- [bridge-design-pattern](bridge-design-pattern) - Bridge pattern example
- [composite-pattern](composite-pattern) - Composite pattern example
- [decorator-pattern](decorator-pattern) - Decorator pattern example
- [facade-pattern](facade-pattern) - Facade pattern example
- [factory-design](factory-design) - Factory and abstract factory examples
- [flyweight-deisgn-pattern](flyweight-deisgn-pattern) - Flyweight pattern example for a space-game asteroid system
- [prototype-design](prototype-design) - Prototype pattern examples
- [proxy-design-pattern](proxy-design-pattern) - Protection, Remote, and Virtual Proxy examples
- [Singleton-design](Singleton-design) - Singleton implementations
- [Food-delivery](Food-delivery) - Additional design practice area

## New design example

The latest addition is a Flyweight pattern example that demonstrates how shared intrinsic state can reduce memory usage for many similar objects. The example models asteroids in a space game so the common asteroid properties are reused through a flyweight factory while each asteroid keeps only its position and velocity as context.

- [flyweight-deisgn-pattern/withflyweight.cpp](flyweight-deisgn-pattern/withflyweight.cpp) - uses the Flyweight pattern and a factory to reuse common asteroid data
- [flyweight-deisgn-pattern/withoutflyweight.cpp](flyweight-deisgn-pattern/withoutflyweight.cpp) - shows the same scenario without optimization for comparison

## Key examples available

- [adapter-deisgn/adapter-design.cpp](adapter-deisgn/adapter-design.cpp)
- [builder-desin/builder.cpp](builder-desin/builder.cpp)
- [builder-desin/builderwithdirector.cpp](builder-desin/builderwithdirector.cpp)
- [builder-desin/step_builder.cpp](builder-desin/step_builder.cpp)
- [bridge-design-pattern/BridgePattern.cpp](bridge-design-pattern/BridgePattern.cpp)
- [builder-desin/without_builder.cpp](builder-desin/without_builder.cpp)
- [composite-pattern/composite-design-pattern.cpp](composite-pattern/composite-design-pattern.cpp)
- [decorator-pattern/decorator.cpp](decorator-pattern/decorator.cpp)
- [facade-pattern/facade-code.cpp](facade-pattern/facade-code.cpp)
- [factory-design/abstract_factory.cpp](factory-design/abstract_factory.cpp)
- [factory-design/factory_method.cpp](factory-design/factory_method.cpp)
- [factory-design/simple_factor.cpp](factory-design/simple_factor.cpp)
- [flyweight-deisgn-pattern/withflyweight.cpp](flyweight-deisgn-pattern/withflyweight.cpp)
- [flyweight-deisgn-pattern/withoutflyweight.cpp](flyweight-deisgn-pattern/withoutflyweight.cpp)
- [prototype-design/with_prtotype.cpp](prototype-design/with_prtotype.cpp)
- [prototype-design/without_prototype.cpp](prototype-design/without_prototype.cpp)
- [proxy-design-pattern/ProtectionProxy.cpp](proxy-design-pattern/ProtectionProxy.cpp)
- [proxy-design-pattern/RemoteProxy.cpp](proxy-design-pattern/RemoteProxy.cpp)
- [proxy-design-pattern/VirtualProxy.cpp](proxy-design-pattern/VirtualProxy.cpp)
- [Singleton-design/eagr_initilization.cpp](Singleton-design/eagr_initilization.cpp)
- [Singleton-design/lazy_loading.cpp](Singleton-design/lazy_loading.cpp)
- [Singleton-design/thread_safe_code.cpp](Singleton-design/thread_safe_code.cpp)

## How to run examples

Each example is a standalone C++ source file. You can compile and run it with g++.

Example:

```bash
g++ flyweight-deisgn-pattern/withflyweight.cpp -o withflyweight
./withflyweight
```

## Notes

- Some folder names contain spelling variations such as "builder-desin" and "adapter-deisgn".
- The repository is best used as a practical reference for understanding how common design patterns are implemented in C++.
- Feel free to add new examples for missing behavioral patterns such as Observer, Strategy, Command, State, and Visitor.
