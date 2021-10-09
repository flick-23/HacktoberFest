public class Main {
    
    public static void main(String[] args) {
        // write your code here
        int[] arr = {50,40,30,25,20,15,10,5,4,3,2,1,0,-1,-2,-3,-4,-5,-10,-15,-20,-25,-30,-40,-50};
        int elementToSearch=10;
        int indexOfElementSearched = searchTheElement(arr,elementToSearch);

        System.out.println(indexOfElementSearched);
    }

    //returns the index of the searched element
    //return -1 if element no found
    //we don't know if the elements in array are sorted in ascending or descending order so we use Order Agnostic BS

    static int searchTheElement(int[] arr,int elementToSearch) {
        int start, end, mid;
        start = 0;
        end = arr.length - 1;

        boolean isArrayAscending = arr[start] < arr[end];

        while (start <= end) {
            mid = start + (end - start) / 2;

            if (elementToSearch == arr[mid]) {
                return mid;
            } else if (isArrayAscending) {
                if (elementToSearch > arr[mid]) {
                    start = mid + 1;
                } else if (elementToSearch < arr[mid]) {
                    end = mid - 1;
                }
            } else {
                if (elementToSearch < arr[mid]) {
                    start = mid + 1;
                } else if (elementToSearch > arr[mid]) {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }

}
