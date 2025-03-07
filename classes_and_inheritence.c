CLASS Animal.
    STRING name.
    INTEGER age.

    FUNCTION speak() RETURNS VOID.
    BEGIN
        PRINTLN("Animal sound").
    END-FUNCTION.
END-CLASS.

CLASS Dog EXTENDS Animal.
    STRING breed.

    FUNCTION speak() RETURNS VOID.
    BEGIN
        PRINTLN("Woof! Woof!").
    END-FUNCTION.
END-CLASS.

DECLARE dog1: Dog.
dog1.name = "Max".
dog1.age = 3.
dog1.breed = "Bulldog".

dog1.speak().  // Output: Woof! Woof!
