import java.util.Arrays;

public class Radix_Sort {
    public Radix_Sort() {
    }

    static void mainIdea(int[] arr, int n) {
        int max = -2147483648;

        int exp;
        for(exp = 0; exp < n; ++exp) {
            if (arr[exp] > max) {
                max = arr[exp];
            }
        }

        for(exp = 1; max / exp > 0; exp *= 10) {
            countingSort(arr, n, exp);
        }

    }

    static void countingSort(int[] arr, int n, int exp) {
        int[] count = new int[10];
        int[] output = new int[n];
        Arrays.fill(count, 0);

        int i;
        for(i = 0; i < n; ++i) {
            ++count[arr[i] / exp % 10];
        }

        for(i = 1; i < 10; ++i) {
            count[i] += count[i - 1];
        }

        for(i = n - 1; i >= 0; --i) {
            output[count[arr[i] / exp % 10] - 1] = arr[i];
            --count[arr[i] / exp % 10];
        }

        for(i = 0; i < n; ++i) {
            arr[i] = output[i];
        }

    }

    public static void main(String[] args) {
        int[] arr = new int[]{319, 212, 6, 8, 100, 50};
        int n = arr.length;
        mainIdea(arr, n);
        System.out.println(Arrays.toString(arr));
    }
}
