|  ___|_ _|__  /__  / __ )| | | |__  /__  /
| |_   | |  / /  / /|  _ \| | | | / /  / / 
|  _|  | | / /_ / /_| |_) | |_| |/ /_ / /_ 
|_|   |___/____/____|____/ \___//____/____|

This is an object-oriented implementation of FIZZBUZZ.

Fizzbuzz is a game where you count from 1 to n, and if the number
you count to is divisible by 3, you say FIZZ! instead of the number.
If the number is divisible by 5, you say BUZZ!, and if it is divisible
by both, you say FIZZBUZZ!

This implementation allows for adding user defined rules! If you want
to add a rule to say "if the number is divisible by 7, say SPARK!", 
you can add this rule by typing the following at the prompt

    Number to go to: 
    add_rule
    Rule: SPARK!
    Value: 7

To run the program with this rule, just type the number you want to 
count to!

    Number to go to: 
    15
    ----------------
    1
    2
    fizz
    4
    buzz
    fizz
    SPARK!
    8
    fizz
    buzz
    11
    fizz
    13
    SPARK!
    fizzbuzz

