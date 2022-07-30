/*
Write a menu driven program to perform the following operations of a stack using array
by using suitable user defined functions for each case.
a) Check if the stack is empty b) Display the contents of stack c) Push d) Pop
*/
#include <stdio.h>
#include <stdlib.h>

            int *stack_556;
            int top_556;
            int size_556;

            int isFull()
            {
                if (top_556 == size_556 - 1)
                    return 1;
                else
                    return 0;
            }

            int isEmpty()
            {
                if (top_556 == -1)
                    return 1;
                else
                    return 0;
            }

            void initialize()
            {
                printf("\nEnter size of stack: ");
                scanf("%d", &size_556);
                stack_556 = (int *)malloc(size_556 * sizeof(int));
                top_556 = -1;
            }

            void push(int userData)
            {
                if (isFull() == 1)
                {
                    printf("\nStack Overflow!\n");
                    return;
                }
                else
                {
                    stack_556[++top_556] = userData;
                }
            }

            int pop()
            {
                if (isEmpty() == 1)
                {
                    printf("\nStack Underflow!\n");
                    return -8888;
                }
                return stack_556[top_556--];
            }

            void display()
            {
                if (isEmpty() == 0)
                {
                    for (int i = top_556; i >= 0; i--)
                        printf("%d.Element = %d\n", i + 1, stack_556[i]);
                }
                else
                {
                    printf("\nStack Underflow!");
                }
            }
            int main()
            {
                initialize();
                int choice_556;
                do
                {
                    printf("\n1.Check if the stack is empty \n2.Display the contents of stack \n3.Push \n4.Pop \n5.Exit");
                    printf("\nEnter choice: ");
                    scanf("%d", &choice_556);
                    switch (choice_556)
                    {
                    case 1:
                    {
                        if (isEmpty() == 1)
                            printf("\nEmpty");
                        else
                            printf("\nNot Empty");
                        break;
                    }
                    case 2:
                    {
                        display();
                        break;
                    }
                    case 3:
                    {
                        int n_556;
                        printf("\nEnter the data to be pushed: ");
                        scanf("%d", &n_556);
                        push(n_556);
                        break;
                    }
                    case 4:
                    {
                        printf("\nPopped element = %d", pop());
                        break;
                    }
                    default:
                    {
                        printf("\nInvalid choice");
                        break;
                    }
                    }

                } while (choice_556 >= 1 && choice_556 <= 4);
                return 0;
            }

            printf("\nPopped element = %d", pop());
            break;
        }
        default:
        {
            printf("\nInvalid choice");
            break;
        }
        }

    } while (choice_556 >= 1 && choice_556 <= 4);
    return 0;
}
