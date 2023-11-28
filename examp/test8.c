#include <stdio.h>

// Struct for item 1
struct
{
    double price;
    union
    {
        int id;
        float weight;
        char *category;
    } details;
    struct
    {
        short width;
        short length;
    } dimension;

} item_one;

// Union for item 2
union item_two
{
    double price;
    union
    {
        int id;
        float weight;
        char *category;
    } details;
    struct
    {
        short width;
        short length;
    } dimension;
};

// Struct for item 3
struct
{
    double price;
    struct
    {
        int id;
        float weight;
        char *category;
    } details;
    union
    {
        short width;
        short length;
    } dimension;

} item_three;

int main()
{

    // 1

    // Print size of item 3
    printf("Size of item_three: %d\n", sizeof(item_three));

    // 2

    // Print size of item 1
    printf("Size of item_one: %d\n", sizeof(item_one));

    // 3

    // Print size of union item 2
    printf("Size of item_two: %d\n", sizeof(union item_two));

    // 4

    // print size of item_one -> details
    // ERROR:
    printf("Size of item_one -> details: %d\n", sizeof(item_one->details));

    // 5

    // Print size of item 2
    // ERROR
    printf("Size of item_two: %d\n", sizeof(item_two));

    // 6

    // print size of item_two.details
    // ERROR
    printf("Size of item_two -> details: %c\n", sizeof(item_two.details));

    // 7

    // print size of union item 2 details + union item 2 dimentions
    printf("Size of item_two . details + item_two . dimentions: %d\n", sizeof(item_two.details) + sizeof(item_two.dimension));

    // 8

    // print size of union item 2 details + union item 2 dimentions (With ->)
    // ERROR
    printf("Size of item_two . details + item_two . dimentions: %d\n", sizeof(union item_two->details) + sizeof(union item_two->dimension));

    // 9

    // print size of struct item 1
    // ERROR
    printf("Size of item_one: %d\n", sizeof(struct item_one));

    // 10

    // print size if item 1 + item 3 + union item 2
    printf("Size of item_one + item_three + item_two: %c\n", sizeof(item_one) + sizeof(item_three) + sizeof(union item_two));

    // 11

    // print size of item 1 details. weight + item 1 dimentions length
    printf("Size of item_one . details . weight + item_one . dimentions . length: %d\n", sizeof(item_one.details.weight) + sizeof(item_one.dimension.length));

    // 12

    // print size of union item 2
    printf("Size of item_two: %d\n", sizeof(union item_two));

    return 0;
}