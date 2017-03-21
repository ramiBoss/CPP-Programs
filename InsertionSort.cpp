Example program for Insertion Sort:


  #include <stdio.h>
  #include <stdlib.h>

  void insertion_sort(int *data, int n) {
        int i, j, temp;
        for (i = 1; i < n; i++) {
                /*
                 * temp is the key that needs to be inserted
                 * at right place
                 */
                temp = data[i];
                /*
                 * elements at data[0] to data[i-1] are sorted.
                 * If key is greater than data[i-1], then key is in
                 * right place.  So, we can skip below processing
                 */
                for (j = i; j > 0 && data[j-1] > temp; j--) {
                        data[j] = data[j-1];
                }
                /* place key at right place */
                data[j] = temp;
        }
  }

  int main() {
        int n, i, *data;
        printf("Insertion Sort Example:\n");
        printf("=======================\n");
        printf("Enter the no of entries:")
        scanf("%d", &n);
        data = (int *)malloc(sizeof (int) * n);
        for (i = 0; i < n; i++)
                scanf("%d", &data[i]);
        printf("Original data:\n");
        for (i = 0; i < n; i++)
                printf("%2d", data[i]);
        printf("\n");
        insertion_sort(data, n);
        printf("After Sorting:\n");
        for (i = 0; i < n; i++)
                printf("%2d", data[i]);
        printf("\n");
        return 0;
  }
