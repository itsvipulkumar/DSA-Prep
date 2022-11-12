public class IsSubsequence {
    public static void main(String args[]) {
        String s = "abc", t = "ahbgdc";
        // char ch = s.charAt(2);
        // int ans = t.indexOf(ch);
        int sum = -1;
        int c=0;
        ///System.out.println(ans);
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            int ans = t.indexOf(ch);
            if (ans >sum) {
                     sum=ans;
                     c++;
            }

        }
    }
}
