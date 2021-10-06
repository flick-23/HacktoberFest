import java.util.Random;

public class Random_Pivot_Lomuto_Partition {
    public Random_Pivot_Lomuto_Partition() {
    }

    static void random(int[] arr, int low, int high) {
        Random rand = new Random();
        int pivot = rand.nextInt(high - low) + low;
        int temp1 = arr[pivot];
        arr[pivot] = arr[high];
        arr[high] = temp1;
    }

    static int Partition(int[] arr, int l, int h) {
        random(arr, l, h);
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
