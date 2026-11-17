#include <stdio.h>

int main() {
    int again = 1;         
    int choice;             
    int size;  
    int shape;    
    int i, j, k, layer;     
    int rows;
    int row;
    int col;
    int value;      
    char word[50];
    int left, right, same;
    float grade, total, average;    

    while (again == 1) {

    printf("\n|===== MAIN MENU =====|\n");
    printf("|1. Pattern Generator |\n");
    printf("|2. Pascal's Triangle |\n");
    printf("|3. Grade Calculator  |\n");
    printf("|4. Palindrome Checker|\n");
    printf("|5. Exit              |\n");
    printf("|=====================|\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");
        
        if (choice == 1) {
        printf("Enter size: ");
        scanf("%d", &size);
        printf("1. Right Triangle\n");
        printf("2. Square\n");
        printf("3. Isosceles Triangle\n");
        printf("4. Inverted Right Triangle\n");
        printf("5. Christmas Tree\n");
        printf("Enter shape: ");
        scanf("%d", &shape); 
        printf("\n");

            if (shape == 1) {
                i = 1;
                while (i <= size) {
                j = 1;
                while (j <= i) {
                printf("*");
                j = j + 1;
                }
                printf("\n");
                i = i + 1;
                }
             }
            else if (shape == 2) {
                i = 1;
                while (i <= size) {
                j = 1;
                while (j <= size) {
                printf("*");
                j = j + 1;
                }
                printf("\n");
                i = i + 1;
                }
             }
            else if (shape == 3) {
                i = 1;
                while (i <= size) {
                k = 1;
                while (k <= size - i) {
                printf(" ");
                k = k + 1;
                }
                j = 1;
                while (j <= 2 * i - 1) {
                printf("*");
                j = j + 1;
                }
                printf("\n");
                i = i + 1;
                }
             }
            else if (shape == 4) {
                i = size;
                while (i >= 1) {
                j = 1;
                while (j <= i) {
                printf("*");
                j = j + 1;
                }
                printf("\n");
                i = i - 1;
                }
              }
            else if (shape == 5) {
                layer = 1;
                while (layer <= 3) {
                i = 1;
                while (i <= size) {
                k = 1;
                while (k <= size - i) {
                printf(" ");
                k = k + 1;
                 }
                j = 1;
                 while (j <= 2 * i - 1) {
                printf("*");
                j = j + 1;
                }
                printf("\n");
                i = i + 1;
                 }
                layer = layer + 1;
                }
                k = 1;
                while (k <= size - 2) {
                printf(" ");
                k = k + 1;
                }
                printf("***\n");
             } else {
                printf("Wrong shape number.\n");
             }
          }
        else if (choice == 2) {
            printf("Enter number of rows: ");
            scanf("%d", &rows);
            printf("\n");
            row = 0;
            while (row < rows) {
                k = 1;
                while (k <= (rows - row - 1) * 2) {
                 printf(" ");
                 k = k + 1;
                 }
                value = 1;
                col = 0;
                while (col <= row) {
                 printf("%4d", value);
                 value = value * (row - col) / (col + 1);
                 col = col + 1;
                }
                printf("\n");
                row = row + 1;
             }
          }
                else if (choice == 3) {
            total = 0;
            i = 1;
            while (i <= 4) {
                printf("Enter grade %d (1.00 to 5.00): ", i);
                scanf("%f", &grade);
                total = total + grade;
                i = i + 1;
             }
            average = total / 4;
            printf("\nAverage: %.2f\n", average);
            if (average <= 3.00) {
            printf("PASSED\n");
             }
            else {
            printf("FAILED\n");
             }
           }
        else if (choice == 4) {
            printf("Enter a word: ");
            scanf("%49s", word);
            right = 0;
            while (word[right] != '\0') {
                right = right + 1;
            }
            right = right - 1;
            left = 0;
            same = 1;
            while (left < right) {
                if (word[left] != word[right]) {
                    same = 0;
                }
                left = left + 1;
                right = right - 1;
            }
            if (same == 1) {
                printf("%s is a palindrome.\n", word);
            }
            else {
                printf("%s is NOT a palindrome.\n", word);
            }
          }
        else if (choice == 5) {
        again = 0;
        }
        else {
        printf("Wrong choice. Pick 1 to 5.\n");
        }
        if (choice != 5) {
            printf("\nTry another one? (1 = Yes, 0 = No): ");
            scanf("%d", &again);
         }
     }
    printf("\nGoodbye!\n");
    return 0;
}
