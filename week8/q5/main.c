#include <stdio.h>

int calculateTotalWeight(int numComponents)
{

    if (numComponents == 0)
    {
        return 0;
    }

    char componentName[100];
    int componentWeight;

    printf("Enter the name of component %d: ", numComponents);
    scanf("%s", componentName);
    printf("Enter the weight of component %d: ", numComponents);
    scanf("%d", &componentWeight);

    int remainingWeight = calculateTotalWeight(numComponents - 1);

    int totalWeight = componentWeight + remainingWeight;

    printf("Component %d: %s (Weight: %d)\n", numComponents, componentName, componentWeight);

    return totalWeight;
}

int main()
{
    int numComponents;

    printf("Enter the number of components: ");
    scanf("%d", &numComponents);

    int totalWeight = calculateTotalWeight(numComponents);

    printf("Total weight of the final product: %d\n", totalWeight);

    return 0;
}
