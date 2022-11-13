public class MaxWordsFound {
    public static void main(String args[]) {
        String[] sentence = { "alice and bob love leetcode", "i think so too", "this is great thanks very much" };
        int len = 0;

       
        for (int i = 0; i < sentence.length; i++) {
            String [] str=sentence[i].split(" ");
           
            int l = str.length;
            if (l > len)
                len = l;
        }
        System.out.println(len);
    }
}