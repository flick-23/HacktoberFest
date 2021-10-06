import java.util.Arrays;

public class SelectionSortEfficientSolution {
    public SelectionSortEfficientSolution() {
    }

    public static void main(String[] args) {
        int[] arr = new int[]{10, 5, 8, 20, 2, 18};
        int n = arr.length;

        for(int i = 0; i < n - 1; ++i) {
            int min_ind = i;

            int j;
            for(j = i + 1; j < n; ++j) {
                if (arr[j] < arr[min_ind]) {
                    min_ind = j;
                }
            }

            j = arr[i];
            arr[i] = arr[min_ind];
            arr[min_ind] = j;
        }

        System.out.println(Arrays.toString(arr));
    }
}
