CLASS Animal.
    STRING name.
    INTEGER age.

    FUNCTION speak() RETURNS VOID.
    BEGIN
        PRINTLN("Generic animal sound").
    END-FUNCTION.
END-CLASS.

DECLARE dog: Animal.
dog.name = "Buddy".
dog.age = 5.
dog.speak().
