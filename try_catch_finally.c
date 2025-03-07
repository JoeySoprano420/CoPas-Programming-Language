TRY
    DECLARE result: INTEGER = 10 / 0.
EXCEPT Exception AS e
    PRINTLN("Error: " + e.message).
FINALLY
    PRINTLN("This block always runs").
END-TRY.
