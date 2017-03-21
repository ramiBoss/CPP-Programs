Example Program For Selection Sort:


  #include <stdio.h>
  #include <stdlib.h>

  int main() {
        int *data, count, temp, i, j, min;
        printf("No of elements:");
        scanf("%d", &count);
        data = (int *)malloc(sizeof (int) * count);
        printf("Enter ur inputs:\n");
        for (i = 0; i < count; i++) {
                scanf("%d", &data[i]);
        }

        /* advance 1 position for each level of parsing */
        for (i = 0; i < count - 1; i++) {
                /* search for the min element */
                min = i;
                for (j = i + 1; j < count; j++) {
                        if (data[j] < data[min]) {
                                min = j;
                        }
                }

                /* swap min element with the current element */
                if (min != i) {
                        temp = data[i];
                        data[i] = data[min];
                        data[min] = temp;
                }
                for (j = 0; j < count; j++)
                        printf("%-3d", data[j]);
                printf("\n");
        }
        printf("Sorted Data:\n");
        for (i = 0; i < count; i++)
                printf("%-3d", data[i]);
        printf("\n");
        return 0;
  }
