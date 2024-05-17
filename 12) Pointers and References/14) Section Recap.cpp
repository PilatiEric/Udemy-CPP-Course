/***************************************************************************************************************
 * Section Recap Notes
 * 
 * FROM:https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535554#overview
 * 
 * SUMMARY: Recap of things learned on pointers and references
****************************************************************************************************************/

/*
When to use pointers vs. references parameters
--------------------------------------------------
-Pass-by-value
    -When the function does not modify the actual parameter
    AND
    -The parameter is small and efficient to copy like simple types (int, char, double, etc.)

-Pass-by-reference using a pointer
    -When the function does modify the actual parameter
    AND
    -The parameter is expensive to copy (more complex types like arrays and vectors)
    AND
    -It's okay for the pointer to be allowed a nullptr value 
        -A lot of data structures rely on pointers becoming null at the end

-Pass-by-reference using a pointer to const
    -When the function does NOT modify the actual parameter
    AND
    -The parameter is expensive to copy
    AND
    -It's okay for the point to be allowed a nullptr value

-Pass-by-reference using a const pointer to const
    -When the function does NOT modify the actual parameter
    AND
    -The parameter is expensive to copy
    AND
    -It's okay for the point to be allowed a nullptr value
    AND
    -You don't want to modify the pointer itself

-Pass-by-reference using a reference
    -When the function DOES modify the actual parameter
    AND
    -The parameter is expensive to copy
    AND
    -The parameter will never be nullptr

-Pass-by-reference using a const reference
    -When teh function does NOT modify the actual parameter
    AND
    -The parameter is expensive to copy
    AND
    -The parameter will never be nullptr
*/