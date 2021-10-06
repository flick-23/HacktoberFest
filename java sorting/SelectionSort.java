public class SelectionSort {
    public SelectionSort() {
    }

    public static void main(String[] args) {
        int[] arr = new int[]{10, 5, 8, 20, 2, 18};
        int n = arr.length;
        int[] temp = new int[n];

        int j;
        for(j = 0; j < n; ++j) {
            int min_ind = 0;

            for(int j = 1; j < n; ++j) {
                if (arr[j] < arr[min_ind]) {
                    min_ind = j;
                }
            }

            temp[j] = arr[min_ind];
            arr[min_ind] = 2147483647;
        }

        for(j = 0; j < n; ++j) {
            arr[j] = temp[j];
        }

        for(j = 0; j < n; ++j) {
            System.out.print(arr[j] + " ");
        }

    }
}
