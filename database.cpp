// Title: Lab 2 - database.cpp
//
// Purpose: **<Fill in with your purpose>
//
// Class: CSC 2430 Winter 2020
// Author: **<Fill in with your name>

#include "database.h"

// This is the value used to score a word not found in the database
const double neutral = 2.0;

// **Add your implementations for InitDatabase, AddWordToDatabase, FindWordInDatabase, and GetInfoAboutDatabase
// **The information is to stored in the set of parallel arrays: words, occurrenceCounts, scoreTotal
// **which are passed as parameters.  The words array should NOT be sorted, but should not contain any
// **duplicates.  The parameter "size" records the current number of slots of the arrays which are filled.
// **The parameter "capacity" specifies the maximum number of slots in each of the arrays.  If you were to
// **call AddWordToDatabase with a new word, and the current value of "size" was equal to "capacity" the
// **the function would not do the insertion and return false instead of true.

// **Don't forget to add header comments before each function using the following format:
    // **<Describe what this function does
    // Parameters:
    //      **<parameter name> -- <description of parameter>
    //      **<parameter name> -- <description of parameter>
    //      **<parameter name> -- <description of parameter>
    //      ...
    // Returns:
    //      **<describe meaning of return value or put "nothing" if this is a function declared void>
    // Possible Errors:
    //      **<describe possible errors>
//
