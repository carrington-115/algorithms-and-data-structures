// Online C compiler to run C program online
#include <stdio.h>

// linked list data type
struct linked_list_elements
{
    int data;
    int *pointer_address;
};

struct singly_linked_list_data_type
{
    struct linked_list_elements elements[20];
};

void creat_linked_list()
{

    struct linked_list_elements data_element[10];
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
        {
            data_element[i].data = i + 1;
            data_element[i].pointer_address = &data_element[i + 1].data;
        }
        else
        {
            data_element[i].data = i + 1;
            data_element[i].pointer_address = NULL;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\nelement: %d next element address: %d", data_element[i].data, data_element[i].pointer_address);
    }

    // for example print element number 2 using the address of number 1
    printf("\n\nelement 2: %d", *data_element[0].pointer_address);
}

// returnable linked list elements
struct singly_linked_list_data_type singly_linked_list()
{
}

//  insertion in linked list

int main()
{
    creat_linked_list();
    return 0;
}