public class Hoare_Partition {
    public Hoare_Partition() {
    }

    static int Partition(int[] arr, int l, int h) {
        int pivot = arr[0];
        int i = l - 1;
        int j = h + 1;

        while(true) {
            do {
                ++i;
            } while(arr[i] < pivot);

            do {
                --j;
            } while(arr[j] > pivot);

            if (i >= j) {
                return j;
            }

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    public static void main(String[] args) {
        int[] a = new int[]{5, 3, 8, 4, 2, 7, 1, 10};
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
