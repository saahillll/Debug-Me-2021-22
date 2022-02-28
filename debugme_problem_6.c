#include <stdio.h>
#include <malloc.h>

/*
Should display
0 1 2 3 4 5 6 7 8 9
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/

struct ArrayContainer
{
    char *arr;
    size_t size;
};

void init_array(struct ArrayContainer *a, const int n)
{
    a->arr = (char *)malloc(n + 1);
    a->size = 0;
}

void cleanup_array(struct ArrayContainer *a)
{
    free(a->arr);
    a->size = 0;
}

void fill_numbers(struct ArrayContainer *a, const int n)
{
    for (int i = 0; i < n; ++i)
    {
        a->arr[i] = (char)(i + 48);
        a->size++;
    }
}

void fill_alphabets(struct ArrayContainer *a, const int n)
{
    for (int i = 0; i < n; ++i)
    {
        a->arr[i] = (char)(i + 65);
        a->size++;
    }
}

void display_array(struct ArrayContainer *a)
{
    for (int i = 0; i < a->size; ++i)
    {
        printf("%c ", a->arr[i]);
    }

    printf("\n");
}

int main()
{
    const int n = 10;
    struct ArrayContainer a;

    init_array(&a, n);
    fill_numbers(&a, n);
    display_array(&a);

    fill_alphabets(&a, 26);
    display_array(&a);
}
