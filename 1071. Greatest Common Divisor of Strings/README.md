Concatenation check (str1 + str2 != str2 + str1) → ensures both strings are built from the same repeating base. If not, no divisor string exists.

gcd(len1, len2) → the largest possible divisor string length must evenly divide both string lengths, so we take that prefix as the GCD string.
