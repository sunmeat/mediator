# mediator pattern cpp example
![](https://refactoring.guru/images/patterns/content/mediator/mediator.png)

In software engineering, the mediator pattern defines an object that encapsulates how a set of objects interact. This pattern is considered to be a behavioral pattern due to the way it can alter the program's running behavior.

In object-oriented programming, programs often consist of many classes. Business logic and computation are distributed among these classes. However, as more classes are added to a program, especially during maintenance and/or refactoring, the problem of communication between these classes may become more complex. This makes the program harder to read and maintain. Furthermore, it can become difficult to change the program, since any change may affect code in several other classes.

With the mediator pattern, communication between objects is encapsulated within a mediator object. Objects no longer communicate directly with each other, but instead communicate through the mediator. This reduces the dependencies between communicating objects, thereby reducing coupling.

Посредник — поведенческий шаблон проектирования, обеспечивающий взаимодействие множества объектов, формируя при этом слабое cцепление и избавляя объекты от необходимости явно ссылаться друг на друга.
