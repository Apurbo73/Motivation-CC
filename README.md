### Motivation-CC
The program first reads the number of test cases, T. For each test case, it reads two integers: N (the number of movies) and X (the available disk space). It then initializes a variable max_rating to zero, which will keep track of the highest IMDB rating of a movie that fits in the available space.

Next, the program loops through each of the N movies, reading the space required S and the IMDB rating R. If the movie's space requirement S is less than or equal to the available space X, the program compares its rating R to the current max_rating and updates max_rating if R is higher. After checking all movies, the program outputs the highest rating found for that test case. This process repeats for all test cases.
