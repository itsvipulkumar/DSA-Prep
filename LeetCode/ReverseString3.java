// Reverse Words in a String III
// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 public class ReverseString3{
    public static void main(String args[])
    {
        String s = "Let's take LeetCode contest";
        String str[]=null;

        str=s.split(" ");
        s="";
        int l=str.length;
        System.out.println(l);
        for(int i=0;i<str.length;i++)
        {
            StringBuffer input =new StringBuffer(str[i]);
            input.reverse();
            s+=input;
            s+=" ";
        }
        System.out.println(s);
    }
 }