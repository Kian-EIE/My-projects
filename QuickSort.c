#include <stdio.h>

int counter = 0;  // 统计比较次数

void QuickSort(int arr[], int left, int right) {
   // 只有一个元素或者没有元素需要比较，直接返回
   if (left >= right)
      return;
   
   int key = arr[left];  // 以最左侧元素作为基准、分割
   int low = left;  // 不是 low = left + 1
   int high = right;
   
   while (low < high) {
      // 从右侧开始寻找第一个比 key 小的元素，并放置到左侧
      while ((low < high) && (arr[high] >= key)) {
         --high;
         counter++;
      }
      arr[low] = arr[high];
      
      // 从左侧开始寻找第一个比 key 大的元素，并放置到右侧
      while ((low < high) && (arr[low] <= key)) {
         ++low;
         counter++;
      }
      arr[high] = arr[low];
   }
   // 大于 low 位置的元素都 >= key，小于 low 位置的元素 <= key
   arr[low] = key;
   
   QuickSort(arr, left, low - 1);  // 继续处理左侧的元素
   QuickSort(arr, low + 1, right);  // 继续处理右侧的元素
}

void PrintArray(int arr[], int n) {
   for (int i = 0; i < n; ++i) {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

int main(void)
{
   int arr[10] = {3, 5, 6, 7, 2, 8, 9, 1, 0, 4};
   //int arr[10] = {0};
   
   PrintArray(arr, 10);
   QuickSort(arr, 0, 9);
   PrintArray(arr, 10);
   
   printf("%d", counter);
   return 0;
}





