import java.util.Arrays;

public class InsertionSort {
    public InsertionSort() {
    }

    public static void main(String[] args) {
        int[] arr = new int[]{10, 5, 8, 20, 0, 5};
        int n = arr.length;

        for(int i = 0; i < n; ++i) {
            int key = arr[i];

            int j;
            for(j = i - 1; j >= 0 && arr[j] > key; --j) {
                arr[j + 1] = arr[j];
            }

            arr[j + 1] = key;
        }

        System.out.println(Arrays.toString(arr));
    }
}
