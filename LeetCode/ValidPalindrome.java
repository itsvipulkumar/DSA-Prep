public class ValidPalindrome {
    public static void main(String args[]) {
        String s = "1a2";
        // System.out.println(s.charAt(0));
        s=s.trim();
        String str = "";
        // char ch1;
        StringBuffer stbuff = new StringBuffer();
        for (int i = 0; i < s.length(); i++)

        {
            char ch = s.charAt(i);
            if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' ) {
                str += ch;
                
            }
            else if(ch >='0' && ch<= '9')
            {
                
               str+=String.valueOf(ch);
               System.out.println(str);
                
            }

        }
        System.out.println(str);
        str = str.toLowerCase();
        
        StringBuffer input = new StringBuffer(str);
        input.reverse();

        System.out.println(input.toString());
        System.out.println(str);
        if(input.toString().equals(str)){
            System.out.println("yes");
        }
        else System.out.println("no");
        // System.out.println(input);
    }
}
