import java.lang.*;
import java.util.*;

public class CommonChar {
    // boolean flag;

    public static void main(String args[]) {
        List<String> list=new ArrayList<String>();  
        int count = 0;
        String words[] = { "bella", "label", "roller" };
        int l = words.length;
       
        String s = words[0]; // bella
        for (int i = 0; i < s.length(); i++) {
            count = 0;
            char ch = s.charAt(i); // b
            for (int j = 0; j < l; j++) {
                int ans = words[j].indexOf(ch, 0);
                if (ans >= 0) {
                    count++;
                }
            }
            if(count>=3)
            {
                list.add(String.valueOf(ch));
            }

        }
        System.out.println(list);
    }
}
