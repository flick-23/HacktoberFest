public class Cycle_Sort_For_Duplicates {
    public Cycle_Sort_For_Duplicates() {
    }

    public static void cycleSort(int[] arr, int n) {
        int writes = 0;

        for(int cycle_start = 0; cycle_start <= n - 2; ++cycle_start) {
            int item = arr[cycle_start];
            int pos = cycle_start;

            int temp;
            for(temp = cycle_start + 1; temp < n; ++temp) {
                if (arr[temp] < item) {
                    ++pos;
                }
            }

            if (pos != cycle_start) {
                while(item == arr[pos]) {
                    ++pos;
                }

                if (pos != cycle_start) {
                    temp = item;
                    item = arr[pos];
                    arr[pos] = temp;
                    ++writes;
                }

                while(pos != cycle_start) {
                    pos = cycle_start;

                    for(temp = cycle_start + 1; temp < n; ++temp) {
                        if (arr[temp] < item) {
                            ++pos;
                        }
                    }

                    while(item == arr[pos]) {
                        ++pos;
                    }

                    if (item != arr[pos]) {
                        temp = item;
                        item = arr[pos];
                        arr[pos] = temp;
                        ++writes;
                    }
                }
            }
        }

    }

    public static void main(String[] args) {
        int[] arr = new int[]{20, 40, 50, 10, 30, 20, 10};
        int n = arr.length;
        cycleSort(arr, n);
        System.out.println("After sort : ");

        for(int i = 0; i < n; ++i) {
            System.out.print(arr[i] + " ");
        }

    }
}
