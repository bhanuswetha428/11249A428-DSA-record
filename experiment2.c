linearsearch recursion
*********************
  program:
*********************
#include <stdio.h>
#include <stdbool.h>

int LinearSearch(int dataSet[], int size, int elementToFind, int index)
{
    if (index >= size)
    {
        return -1;
    }
    if (dataSet[index] == elementToFind)
    {
        return index;
    }
    return LinearSearch(dataSet, size, elementToFind, index + 1);
}
int main()
{
    int size, elementToFind, i;
    printf("Enter the size of Data Set for Linear Search:");
    scanf("%d", &size);

    int searchSpace[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter the %d out of %d element in data set: ", i + 1, size);
        scanf("%d", &searchSpace[i]);
    }

    printf("Given Dataset for Linear Search is: ");
    for (i = 0; i < size; i++)
    {
    }

    printf("\nEnter the element to find in the dataset: ");
    scanf("%d", &elementToFind);
        printf("%d - ", searchSpace[i]);

    int foundAt = LinearSearch(searchSpace, size, elementToFind, i = 0);

    if (foundAt >= 0)
        printf("Required element %d is found in the dataset at position %d or index %d", elementToFind, foundAt + 1, foundAt);
    else
        printf("Required element %d is NOT found in the dataset!!!", elementToFind);
}
******************
  output
******************
  Enter the size of Data Set for Linear Search:3
Enter the 1 out of 3 element in data set: 1
Enter the 2 out of 3 element in data set: 1
Enter the 3 out of 3 element in data set: 2
Given Dataset for Linear Search is: 1 - 1 - 2 - 
Enter the element to find in the dataset: 2
Required element 2 is found in the dataset at position 3 or index 2
