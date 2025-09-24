We iterate through both strings using iterators and append characters alternately to the result string.

Pre-allocate space using reserve for efficiency.

Append from word1 if available, then from word2.

Continue until both strings are fully processed.

Time Complexity: O(m + n)
Space Complexity: O(m + n)