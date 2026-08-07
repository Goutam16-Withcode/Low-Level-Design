# Low Level Design Patterns in C++

This repository contains a collection of C++ examples for common low-level design concepts and object-oriented design patterns. It is intended for learning, interview preparation, and practicing software design.

## What is included

The examples are organized by pattern family and cover both classic GoF patterns and practical LLD-style implementations.

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
- Template Method
- Observer

## Repository structure

- [adapter-deisgn](adapter-deisgn) — Adapter pattern example
- [bridge-design-pattern](bridge-design-pattern) — Bridge pattern example
- [builder-desin](builder-desin) — Builder pattern examples and variations
- [chainofresponsibility](chainofresponsibility) — Chain of Responsibility pattern example for ATM dispensing
- [composite-pattern](composite-pattern) — Composite pattern example
- [decorator-pattern](decorator-pattern) — Decorator pattern example
- [facade-pattern](facade-pattern) — Facade pattern example
- [factory-design](factory-design) — Factory, abstract factory, and simple factory examples
- [flyweight-deisgn-pattern](flyweight-deisgn-pattern) — Flyweight pattern example with and without optimization
- [Food-delivery](Food-delivery) — Additional design practice area
- [observer-design-pattern](observer-design-pattern) — Observer pattern example
- [prototype-design](prototype-design) — Prototype pattern examples
- [proxy-design-pattern](proxy-design-pattern) — Protection, Remote, and Virtual Proxy examples
- [Singleton-design](Singleton-design) — Multiple Singleton implementations
- [TemplateMethodPattern](TemplateMethodPattern) — Template Method pattern example

## Key examples

- [adapter-deisgn/adapter-design.cpp](adapter-deisgn/adapter-design.cpp)
- [builder-desin/builder.cpp](builder-desin/builder.cpp)
- [builder-desin/builderwithdirector.cpp](builder-desin/builderwithdirector.cpp)
- [builder-desin/step_builder.cpp](builder-desin/step_builder.cpp)
- [builder-desin/without_builder.cpp](builder-desin/without_builder.cpp)
- [bridge-design-pattern/BridgePattern.cpp](bridge-design-pattern/BridgePattern.cpp)
- [chainofresponsibility/COR.cpp](chainofresponsibility/COR.cpp)
- [composite-pattern/composite-design-pattern.cpp](composite-pattern/composite-design-pattern.cpp)
- [decorator-pattern/decorator.cpp](decorator-pattern/decorator.cpp)
- [facade-pattern/facade-code.cpp](facade-pattern/facade-code.cpp)
- [factory-design/abstract_factory.cpp](factory-design/abstract_factory.cpp)
- [factory-design/factory_method.cpp](factory-design/factory_method.cpp)
- [factory-design/simple_factor.cpp](factory-design/simple_factor.cpp)
- [flyweight-deisgn-pattern/withflyweight.cpp](flyweight-deisgn-pattern/withflyweight.cpp)
- [flyweight-deisgn-pattern/withoutflyweight.cpp](flyweight-deisgn-pattern/withoutflyweight.cpp)
- [observer-design-pattern/ObserverDesignPattern.cpp](observer-design-pattern/ObserverDesignPattern.cpp)
- [prototype-design/with_prtotype.cpp](prototype-design/with_prtotype.cpp)
- [prototype-design/without_prototype.cpp](prototype-design/without_prototype.cpp)
- [proxy-design-pattern/ProtectionProxy.cpp](proxy-design-pattern/ProtectionProxy.cpp)
- [proxy-design-pattern/RemoteProxy.cpp](proxy-design-pattern/RemoteProxy.cpp)
- [proxy-design-pattern/VirtualProxy.cpp](proxy-design-pattern/VirtualProxy.cpp)
- [Singleton-design/eagr_initilization.cpp](Singleton-design/eagr_initilization.cpp)
- [Singleton-design/lazy_loading.cpp](Singleton-design/lazy_loading.cpp)
- [Singleton-design/thread_safe_code.cpp](Singleton-design/thread_safe_code.cpp)
- [TemplateMethodPattern/TemplateMethodPattern.cpp](TemplateMethodPattern/TemplateMethodPattern.cpp)

## How to run

Each example is a standalone C++ file. You can compile and run it with g++:

```bash
g++ observer-design-pattern/ObserverDesignPattern.cpp -o observer
./observer
```

You can replace the source path with any other example file to try a different pattern.

## Notes

- Some folder names contain spelling variations such as "builder-desin" and "adapter-deisgn".
- This repository is best used as a practical reference for understanding pattern implementations in C++.
- Contributions and new examples are welcome.
