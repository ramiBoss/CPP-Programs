Example Program For Quick Sort:


  #include <stdio.h>
  #include <stdlib.h>

  int quickSort(int *data, int left, int right) {
        int pivot = left;
        int i = left +1, j = right, temp;
        if (left < right) {
        while (1) {
                while (data[j] > data[pivot])
                        j--;
                while (data[i] <= data[pivot])
                        i++;
                if (i < j) {
                        temp = data[i];
                        data[i] = data[j];
                        data[j] = temp;
                } else
                        break;
        }
        temp = data[pivot];
        data[pivot] = data[j];
        data[j] = temp;
        quickSort(data, left, j-1);
        quickSort(data, j+1, right);
        }
        return 0;
  }

  int main() {
        int i, j, num, *data;
        printf("Enter ur number of entries:");
        scanf("%d", &num);
        data = (int *)malloc(sizeof (int) * num);
        for (i = 0; i < num; i++) {
                scanf("%d", &data[i]);
        }
        quickSort(data, 0, num-1);
        printf("After sorting:\n");
        for (i = 0; i < num; i++)
                printf("%3d", data[i]);
        printf("\n");
        return;
  }