# Median-Mode-Mean-Calculator
This program calculates the median, mode, and mean of a set of numbers entered by the user, providing a quick basic statistical analysis.

## Main Functions

- **Calculate the Mean**: Calculates the average of a set of numbers by dividing the sum of all the elements by the total number of elements.
  
- **Find the Mode**: Finds the number that appears most frequently in the dataset. If there is no number repeated, it indicates that there is no mode.

- **Calculate the Median**: Sorts the array of numbers and selects the middle value. If the dataset has an even number of elements, the median is the average of the two central values.

- **Sort the Array**: Sorts the array of numbers in ascending order to calculate the median and also to find the highest and lowest values.

## Code Structure

- `main.c`: The main file where input and output operations are performed.
- `funciones.c`: Contains the functions to calculate the mean, mode, sort the array, and calculate the median.
- `funciones.h`: The header file that declares the functions.

## Example Output
For a dataset like:
5, 3, 7, 3, 8, 5, 6, 9, 10, 2

The output will be:
- The mode is 3 and it repeats 2 times.
- The median is 5.
- The mean is 5.2.
