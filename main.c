#include <stdio.h>
#include <string.h>

// Calculates the average score from an array of integers
float calculate_average(int scores[], int count) {
int sum = 0;
for (int i = 0; i < count; i++) {
sum += scores[i];
}
return (float)sum / count;
}

// Capitalizes the first letter of a name (if it's lowercase)
void capitalize_first_letter(char name[]) {
if (name[0] >= 'a' && name[0] <= 'z') {
name[0] = name[0] - ('a' - 'A');
}
}

int main() {
// 5 students, 13 test scores each
char names[5][11] = {
"alice",
"karl",
"nils",
"anton",
"selma"
};

int scores[5][13] = {
{8, 9, 7, 6, 10, 9, 8, 7, 10, 10, 9, 10, 8}, // Alice
{5, 5, 6, 4, 6, 5, 5, 5, 5, 5, 4, 5, 10}, // Karl
{4, 3, 5, 4, 5, 4, 5, 4, 4, 4, 4, 4, 4}, // Nils
{10, 9, 9, 10, 9, 10, 10, 9, 10, 10, 9, 9, 10}, // Anton
{7, 6, 7, 8, 7, 6, 7, 7, 6, 7, 7, 6, 7} // Selma
};

float averages[5];

// Capitalize names and calculate average scores
for (int i = 0; i < 5; i++) {
capitalize_first_letter(names[i]);
averages[i] = calculate_average(scores[i], 13);
}

// Step 1: Find the student with the highest average
int highest_index = 0;
for (int i = 1; i < 5; i++) {
if (averages[i] > averages[highest_index]) {
highest_index = i;
}
}

// Print the student with the highest average
printf("Step 1 - Student with highest average score:\n");
printf("%s\n\n", names[highest_index]);

// Step 2: Print students with below-average scores
float total = 0;
for (int i = 0; i < 5; i++) {
total += averages[i];
}
float group_average = total / 5;

printf("Step 2 - Students below group average:\n");
for (int i = 0; i < 5; i++) {
if (averages[i] < group_average) {
printf("%s\n", names[i]);
}
}

return 0;
}

