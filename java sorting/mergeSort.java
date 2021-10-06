public class MergeSort {
    public MergeSort() {
    }

    public static void main(String[] args) {
        int[] arr = new int[]{10, 5, 30, 15, 7};
        int low = 0;
        int high = 4;
        ActualMergeSort(arr, low, high);
        int[] var7 = arr;
        int var6 = arr.length;

        for(int var5 = 0; var5 < var6; ++var5) {
            int element = var7[var5];
            System.out.print(element + " ");
        }

    }

    static void merge(int[] arr, int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;
        int[] left = new int[n1];
        int[] right = new int[n2];

        int i;
        for(i = 0; i < n1; ++i) {
            left[i] = arr[i + low];
        }

        for(i = 0; i < n2; ++i) {
            right[i] = arr[mid + 1 + i];
        }

        i = 0;
        int j = 0;
        int k = low;

        while(i < n1 && j < n2) {
            if (left[i] < right[j]) {
                arr[k] = left[i];
                ++i;
                ++k;
            } else {
                arr[k] = right[j];
                ++k;
                ++j;
            }
        }

        while(i < n1) {
            arr[k] = left[i];
            ++i;
            ++k;
        }

        while(j < n2) {
            arr[k] = right[j];
            ++j;
            ++k;
        }

    }

    static void ActualMergeSort(int[] arr, int low, int high) {
        if (high > low) {
            int m = low + (high - low) / 2;
            ActualMergeSort(arr, low, m);
            ActualMergeSort(arr, m + 1, high);
            merge(arr, low, m, high);
        }

    }
}
