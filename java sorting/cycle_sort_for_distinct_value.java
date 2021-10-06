import java.util.Arrays;

public class Cycle_Sort_For_Distinct {
    public Cycle_Sort_For_Distinct() {
    }

    public static void main(String[] args) {
        int[] arr = new int[]{20, 40, 50, 10, 30};
        int n = arr.length;
        System.out.print("Before Sorting : ");
        System.out.print(Arrays.toString(arr));
        System.out.println();
        cycleSort(arr, n);
        System.out.print("After Sorting : ");
        System.out.print(Arrays.toString(arr));
    }

    static void cycleSort(int[] a, int n) {
        for(int cs = 0; cs < n - 1; ++cs) {
            int item = a[cs];
            int pos = cs;

            int temp;
            for(temp = cs + 1; temp < n; ++temp) {
                if (a[temp] <= item) {
                    ++pos;
                }
            }

            temp = a[pos];
            a[pos] = item;

            for(item = temp; pos != cs; item = temp) {
                pos = cs;

                for(int i = cs + 1; i < n; ++i) {
                    if (a[i] <= item) {
                        ++pos;
                    }
                }

                temp = a[pos];
                a[pos] = item;
            }
        }

    }
}
