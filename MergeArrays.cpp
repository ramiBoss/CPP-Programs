Example Program To Merge Two Arrays (in C):


  #include <stdio.h>
  #include <stdlib.h>

  /* sort array in ascending order */
  void sortArray(int *array, int n) {
        int i, j, temp;
        for (i = 0; i < n - 1; i++) {
                for (j = i + 1; j < n; j++) {
                        if (array[i] > array[j]) {
                                temp = array[i];
                                array[i] = array[j];
                                array[j] = temp;
                        }
                }
        }
  }

  /* merge i/p arrays "input1" and "input2" to form "output" array */
  int * mergeArrays(int *input1, int *input2, int n1, int n2) {
        int i, j, k, n, *output;
        n = n1 + n2;
        i = j = k = 0;
        output = (int *)malloc(sizeof (int) * n);
        while (i <= n) {
                if (input1[k] < input2[j]) {
                        output[i] = input1[k];
                        k++;
                        if (k >= n1) {
                                while (j < n2) {
                                        i++;
                                        output[i] = input2[j];
                                        j++;
                                }
                        }
                } else {
                        output[i] = input2[j];
                        j++;
                        if (j >= n2) {
                                while (k < n1) {
                                        i++;
                                        output[i] = input1[k];
                                        k++;
                                }
                        }
                }
                i++;
        }
        return output;
  }

  /* display contents of the given array */
  void display(int *array, int n) {
        int i;
        for (i = 0; i < n; i++) {
                printf("%d ", array[i]);
        }
        printf("\n");
  }

  int main() {
        int i, n1, n2, *input1, *input2, *output;
        printf("Enter the no of elements for array 1 & 2:");
        scanf("%d%d", &n1, &n2);
        input1 = (int *)malloc(sizeof (int) * n1);
        input2 = (int *)malloc(sizeof (int) * n2);
        printf("Input for Array 1:\n");
        for (i = 0; i < n1; i++) {
                printf("input1[%d]:", i);
                scanf("%d", &input1[i]);
        }
        printf("Input for Array 2:\n");
        for (i = 0; i < n2; i++) {
                printf("input2[%d]:", i);
                scanf("%d", &input2[i]);
        }

        sortArray(input1, n1);
        sortArray(input2, n2);
        printf("\nInput Array 1:");
        display(input1, n1);
        printf("Input Array 2:");
        display(input2, n2);
        output = mergeArrays(input1, input2, n1, n2);
        printf("Output Array After Merge Operation:\n");
        display(output, n1 + n2);
        return 0;
  }
