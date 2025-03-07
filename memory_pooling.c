DECLARE memoryPool: POOL[OBJECT].

FUNCTION initMemoryPool(poolSize: INTEGER) RETURNS POOL[OBJECT].
BEGIN
    DECLARE newPool: POOL[OBJECT] = NEW POOL[OBJECT](poolSize).
    RETURN newPool.
END-FUNCTION.

FUNCTION allocateFromPool(pool: POOL[OBJECT]) RETURNS OBJECT.
BEGIN
    IF pool.hasAvailable() THEN
        RETURN pool.allocate().
    ELSE
        PRINTLN("Memory pool exhausted!").
        RETURN NULL.
    END-IF.
END-FUNCTION.

FUNCTION deallocateToPool(pool: POOL[OBJECT], obj: OBJECT) RETURNS VOID.
BEGIN
    pool.deallocate(obj).
END-FUNCTION.
