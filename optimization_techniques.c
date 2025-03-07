DECLARE x: INTEGER = 5.
DECLARE result: INTEGER = (x + 10) * 2.  // Optimized at compile-time

DECLARE arr: LIST[INTEGER] = [1, 2, 3, 4, 5].
FOR i = 0 TO 4 DO
    PRINTLN(arr[i]).  // Loop unrolling optimization
END-FOR.
