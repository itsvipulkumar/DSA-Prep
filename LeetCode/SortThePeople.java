import java.util.*;
import java.util.Arrays;
// import org.apache.commons.lang.ArrayUtils;mport javax.management.MXBean;

public class SortThePeople {
    public static void main(String args[]) {
        String[] str = { "mary", "john", "emma" };
        String [] newstr= new String[3];
        int nums[] = { 180, 165, 170 };

        int len=nums.length;
        System.out.println(len);
        int[] copiedArray = Arrays.copyOf(nums, len);
        Arrays.sort(copiedArray);
       
        ArrayList<Integer> clist = new ArrayList<>();
        for (int i : nums) {
            clist.add(i);
        }
        for (int i = 0; i < nums.length; i++) {
            int x=clist.indexOf(copiedArray[i]);
            newstr[len-i-1]=str[x];
           
            
        }
        for (int i=0;i<len;i++) {
            System.out.println(newstr[i]);
        }
    }
}
