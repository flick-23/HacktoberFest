
import java.util.Arrays;

public class Counting_Sort {
    public Counting_Sort() {
    }

    public static void main(String[] args) {
        int[] arr = new int[]{1, 4, 4, 1, 0, 1};
        int k = 5;
        int[] count = new int[k];

        int index;
        for(index = 0; index < k; ++index) {
            count[index] = 0;
        }

        for(index = 0; index < arr.length; ++index) {
            ++count[arr[index]];
        }

        index = 0;

        for(int i = 0; i < k; ++i) {
            for(int j = 0; j < count[i]; ++j) {
                arr[index] = i;
                ++index;
            }
        }

        System.out.println(Arrays.toString(arr));
    }
}
