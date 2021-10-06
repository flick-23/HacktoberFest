public class QuickSortNaivePrtition {
    public QuickSortNaivePrtition() {
    }

    static void NaivePartition(int[] arr, int l, int r, int p) {
        int[] temp = new int[r - l + 1];
        int index = 0;

        int i;
        for(i = l; i <= p; ++i) {
            if (arr[i] <= arr[p] && i != p) {
                temp[index] = arr[i];
                ++index;
            }
        }

        temp[index++] = arr[p];

        for(i = l; i <= r; ++i) {
            if (arr[i] > arr[p]) {
                temp[index] = arr[i];
                ++index;
            }
        }

        for(i = l; i <= r; ++i) {
            arr[i] = temp[i - l];
        }

    }

    public static void main(String[] args) {
        int[] a = new int[]{2, 7, 8, 3, 5};
        int n = a.length;
        int p = 4;
        System.out.print("Before Partitioning : ");
        int[] var7 = a;
        int var6 = a.length;

        int element;
        int var5;
        for(var5 = 0; var5 < var6; ++var5) {
            element = var7[var5];
            System.out.print(element + " ");
        }

        System.out.println(" ");
        System.out.print("After Partitioning : ");
        NaivePartition(a, 0, n - 1, p);
        var7 = a;
        var6 = a.length;

        for(var5 = 0; var5 < var6; ++var5) {
            element = var7[var5];
            System.out.print(element + " ");
        }

    }
}
