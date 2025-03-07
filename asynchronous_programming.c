ASYNC FUNCTION fetchData() RETURNS STRING.
BEGIN
    // Simulate async task
    WAIT 1000ms.
    RETURN "Data fetched".
END-FUNCTION.

MAIN FUNCTION.
BEGIN
    STRING result = await fetchData().
    PRINTLN(result).
END-FUNCTION.
