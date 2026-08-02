# Low Level Design Patterns

This workspace contains a set of low level design pattern examples written in C++.
The README organizes them by the standard GoF categories, shows what is already implemented,
and explains the common LLD patterns that are still missing from this repository.

## Pattern Map

### Creational Patterns
Creational patterns focus on object creation and instantiation rules.

| Pattern | Status | Example file | Explanation |
| --- | --- | --- | --- |
| Singleton | Implemented | [Singleton-design/eagr_initilization.cpp](Singleton-design/eagr_initilization.cpp), [Singleton-design/lazy_loading.cpp](Singleton-design/lazy_loading.cpp), [Singleton-design/thread_safe_code.cpp](Singleton-design/thread_safe_code.cpp) | Ensures a class has only one instance and gives global access to it. |
| Factory Method | Implemented | [factory-design/factory_method.cpp](factory-design/factory_method.cpp) | Lets subclasses decide which concrete object to create. |
| Abstract Factory | Implemented | [factory-design/abstract_factory.cpp](factory-design/abstract_factory.cpp) | Creates families of related objects without binding the code to concrete classes. |
| Builder | Implemented | [builder-desin/builder.cpp](builder-desin/builder.cpp), [builder-desin/without_builder.cpp](builder-desin/without_builder.cpp), [builder-desin/step_builder.cpp](builder-desin/step_builder.cpp), [builder-desin/builderwithdirector.cpp](builder-desin/builderwithdirector.cpp) | Separates the construction of a complex object from its final representation. |
| Prototype | Implemented | [prototype-design/with_prtotype.cpp](prototype-design/with_prtotype.cpp), [prototype-design/without_prototype.cpp](prototype-design/without_prototype.cpp) | Creates new objects by copying an existing instance. |
| Object Pool | Missing | Not present | Reuses expensive-to-create objects instead of repeatedly creating new ones. |
| Simple Factory | Extra | [factory-design/simple_factor.cpp](factory-design/simple_factor.cpp) | A common teaching pattern that centralizes object creation, but it is not one of the canonical GoF patterns. |

### Structural Patterns
Structural patterns focus on how classes and objects are composed.

| Pattern | Status | Example file | Explanation |
| --- | --- | --- | --- |
| Adapter | Implemented | [adapter-deisgn/adapter-design.cpp](adapter-deisgn/adapter-design.cpp) | Converts one interface into another so incompatible classes can work together. |
| Bridge | Missing | Not present | Splits abstraction from implementation so both can evolve independently. |
| Composite | Implemented | [composite-pattern/composite-design-pattern.cpp](composite-pattern/composite-design-pattern.cpp) | Treats individual objects and groups of objects the same way through a tree structure. |
| Decorator | Implemented | [decorator-pattern/decorator.cpp](decorator-pattern/decorator.cpp) | Adds behavior to an object dynamically without changing its class. |
| Facade | Implemented | [facade-pattern/facade-code.cpp](facade-pattern/facade-code.cpp) | Provides a simple interface over a complex subsystem. |
| Flyweight | Missing | Not present | Shares common state across many objects to reduce memory usage. |
| Proxy | Missing | Not present | Acts as a stand-in that controls access to another object. |

### Behavioral Patterns
Behavioral patterns focus on communication between objects and the distribution of responsibility.

| Pattern | Status | Example file | Explanation |
| --- | --- | --- | --- |
| Chain of Responsibility | Missing | Not present | Passes a request through a chain of handlers until one handles it. |
| Command | Missing | Not present | Encapsulates a request as an object. |
| Interpreter | Missing | Not present | Represents grammar rules and evaluates expressions. |
| Iterator | Missing | Not present | Traverses a collection without exposing its internal structure. |
| Mediator | Missing | Not present | Centralizes object communication to reduce coupling. |
| Memento | Missing | Not present | Captures and restores an object's previous state. |
| Observer | Missing | Not present | Notifies dependent objects when a subject changes state. |
| State | Missing | Not present | Changes behavior when an object's internal state changes. |
| Strategy | Missing | Not present | Switches between algorithms at runtime. |
| Template Method | Missing | Not present | Defines an algorithm skeleton while allowing steps to be overridden. |
| Visitor | Missing | Not present | Separates an operation from the object structure it works on. |

## What Is Present In This Repo
Implemented examples currently available in the workspace:
- [adapter-deisgn](adapter-deisgn)
- [builder-desin](builder-desin)
- [composite-pattern](composite-pattern)
- [facade-pattern](facade-pattern)
- [factory-design](factory-design)
- [prototype-design](prototype-design)
- [Singleton-design](Singleton-design)

## What Is Missing
The repository does not yet include examples for the remaining GoF patterns listed above. The biggest gaps are:
- Structural patterns such as Bridge, Decorator, Proxy, and Flyweight.
- Behavioral patterns such as Strategy, Observer, Command, State, and Visitor.
- The creational Object Pool pattern.

## Common LLD Patterns Outside GoF
In low level design interviews, people also talk about application-level patterns that are not part of the GoF catalog. These are not present in this workspace yet either.
- DAO: separates persistence logic from business logic.
- Repository: provides a collection-like abstraction over data access.
- Service Layer: groups business operations behind a dedicated service API.
- DTO: carries data between layers without exposing domain internals.
- MVC: separates presentation, control flow, and data model concerns.
- Dependency Injection: supplies dependencies from the outside instead of creating them internally.

## Notes
- The folder names in this workspace contain spelling inconsistencies, but the README keeps the actual paths so the links still work.
- If you add more examples later, the tables above can be expanded with direct links and short notes.
