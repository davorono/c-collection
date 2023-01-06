# c-collection
A collection of my single-file C solutions

## area.c
This program calculates and displays the area of a rectangle. The user is prompted to enter the height and width of the rectangle, and then the area is calculated and displayed.

## arrayaverage.c
This program calculates and displays the average of the highest and lowest values in an array. The array is hardcoded with six float values, and the size of the array is calculated in the main function. The arrAvg function is called with the array and its size as arguments and returns the average of the highest and lowest values in the array. The average is then printed to the console.

## arraycopy.c
This program separates the positive and negative values from an array of integers and stores them in separate arrays.

## arrayfill.c
This program generates an array of integers and populates it with a range of values. It then calculates the next value in the Collatz sequence for a given integer and adds it to the array until the value becomes 1.

## capitalize.c
This program capitalizes the first letter of each word in a given string and lowercases all other letters. It does this by looping through each character in the string and using ASCII values to determine if the letter should be capitalized or not.

## change.c
This program calculates the minimum number of bills needed to make a given dollar amount. It does this by first getting user input for the amount and then using a series of nested loops to determine the number of hundred, twenty, ten, five, and one dollar bills needed. The program then returns the total number of bills needed.

## collatz.c
This program generates the Collatz sequence for a given integer and prints it to the screen. It also calculates the length of the sequence and displays it. The program starts by getting user input for the starting integer and then uses a loop to repeatedly pass the integer through the nextCollatz function until it becomes 1. The program then prints the resulting sequence and its length.

## flag.c
This program prints a flag pole of a given height. It does this by first getting user input for the height and then using a loop to print the appropriate number of lines for the flag pole. If the given height is outside the specified range, the program will print an error message.

## gcd.c
This program calculates the greatest common divisor (GCD) of two given integers. It does this by first getting user input for the two integers and then using a loop to find the largest integer that evenly divides both numbers. The program then prints the resulting GCD.

## pricesort.c
This program sorts three given prices in ascending order. It does this by first getting user input for the three prices and then using a series of nested if statements and the swap function to rearrange the values as needed. The program then prints the resulting sorted prices.

## recover.c
This program recovers jpeg images from a raw data file. It does this by first reading the data from the file into an array of bytes and then using a loop to search for jpeg start markers (0xffd8ffe0 or 0xffd8ffe1). When a start marker is found, the program uses another loop to search for the corresponding end marker (0xffd90000). Once both markers have been found, the program saves the jpeg image and continues searching for additional images until the end of the data is reached. The program also keeps track of the number of images recovered and displays this count when finished.

## reverse.c
This program is a game where the user is presented with a board of integers in random order. The user must reverse a certain number of integers in the board to try and sort them in ascending order. The game ends when the board is sorted and the user's number of moves is displayed. The user can choose the size of the board and the amount of integers to reverse at each turn.

## sigmoid.c
This program calculates and prints the sigmoid function for a range of input values. The sigmoid function is a mathematical function commonly used in machine learning algorithms to predict probabilities.

## stringSearch.c
This program searches a file for a specified string and prints all lines that contain that string. It takes in two command line arguments: the string to search for and the file to search in. If there are not enough command line arguments, it will print an error message. It also checks if the file opened properly before searching it.

## sumfrac.c
This program prompts the user to input two fractions, calculates the sum of those fractions, and prints the result. It converts the fractions to have a common denominator before performing the addition.

## time.c 
This program prompts the user to enter a time in the 24 hour format, checks that the input is valid, and then converts it to the 12 hour format. It also adds an AM or PM indicator based on the input time.
