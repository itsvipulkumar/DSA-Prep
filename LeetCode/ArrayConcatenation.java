import java.util.Arrays;
import java.util.Vector;

public class ArrayConcatenation {
    public static void main(String args[]) {
        Vector<Integer> vec = new Vector<Integer>();
        int nums[] = { 15, 49 };
        int n = nums.length;
        int sum = 0;
        int setZero = 0;
        if (nums.length % 2 != 0) {
            System.out.println("yes");
            sum = sum + nums[n / 2];
        }
        for (int i = 0; i < nums.length; i++) {
            if (i >= (n - i - 1)) {
                break;
            } else {
                String str = nums[n - i - 1] + "";
                if (str.length() == 1) {
                    setZero = 10;
                } else if (str.length() == 2) {
                    setZero = 100;
                }

                // if(nums[n-i-1].)
                vec.add(nums[i] * setZero + nums[n - i - 1]);

            }
        }

        for (int i = 0; i < vec.size(); i++)
            sum += vec.get(i);
        System.out.println(sum);
    }
}