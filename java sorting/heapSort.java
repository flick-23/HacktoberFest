import java.util.Arrays;

public class HeapSort {
    public HeapSort() {
    }

    static void maxHeapify(int[] arr, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n && arr[left] > arr[i]) {
            largest = left;
        }

        if (right < n && arr[right] > arr[largest]) {
            largest = right;
        }

        if (largest != i) {
            int temp = arr[largest];
            arr[largest] = arr[i];
            arr[i] = temp;
            maxHeapify(arr, n, largest);
        }

    }

    static void buildHeap(int[] arr, int n) {
        for(int i = (n - 2) / 2; i >= 0; --i) {
            maxHeapify(arr, n, i);
        }

    }

    static void Heap_Sort(int[] arr, int n) {
        buildHeap(arr, n);

        for(int i = n - 1; i >= 1; --i) {
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
            maxHeapify(arr, i, 0);
        }

    }

    public static void main(String[] args) {
        int[] arr = new int[]{10, 5, 8, 2, 70, 6, 50, 40};
        Heap_Sort(arr, arr.length);
        System.out.println(Arrays.toString(arr));
    }
}
