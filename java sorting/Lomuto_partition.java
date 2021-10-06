public class Lomuto_Partition {
    public Lomuto_Partition() {
    }

    static int Partition(int[] arr, int l, int h) {
        int pivot = arr[h];
        int i = l - 1;

        int j;
        for(j = l; j <= h - 1; ++j) {
            if (arr[j] < pivot) {
                ++i;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        j = arr[i + 1];
        arr[i + 1] = arr[h];
        arr[h] = j;
        return i + 1;
    }

    public static void main(String[] args) {
        int[] a = new int[]{3, 8, 6, 12, 10, 7};
        int n = a.length;
        System.out.print("Before Partitioning : ");
        int[] var6 = a;
        int var5 = a.length;

        int element;
        int var4;
        for(var4 = 0; var4 < var5; ++var4) {
            element = var6[var4];
            System.out.print(element + " ");
        }

        System.out.println(" ");
        System.out.print("After Partitioning : ");
        Partition(a, 0, n - 1);
        var6 = a;
        var5 = a.length;

        for(var4 = 0; var4 < var5; ++var4) {
            element = var6[var4];
            System.out.print(element + " ");
        }

    }
}
