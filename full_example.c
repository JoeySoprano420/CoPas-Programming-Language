FUNCTION main() RETURNS VOID.
BEGIN
    DECLARE num: INTEGER = 10.
    DECLARE name: STRING = "Joey".
    DECLARE isActive: BOOLEAN = TRUE.

    IF num > 5 THEN
        PRINTLN("num is greater than 5").
    END-IF.

    DECLARE person1: Person.
    person1.name = "Alice".
    person1.age = 30.

    DECLARE result: INTEGER = factorial(5).
    PRINTLN("Factorial of 5 is: " + result).

    DECLARE numbers: LIST[INTEGER] = [1, 2, 3, 4, 5].
    printList(numbers).

    DECLARE dog: Animal.
    dog.name = "Buddy".
    dog.age = 5.
    dog.speak().
END-FUNCTION.
