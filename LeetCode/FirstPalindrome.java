public class FirstPalindrome {
    public static void main(String args[])

    {
       String[] words = {"def","ghi"};
       String s="";

    //    StringBuffer str= new StringBuffer();
    //         str.append(words[2]);
    //           str.reverse();
    //           System.out.println(str);
    //               if(str.toString().equals(words[2]))
    //         {
    //             System.out.println("hey");
                 
    //         }
        for(int i=0;i<words.length;i++)
        {
            StringBuffer str= new StringBuffer();
            str.append(words[i]);
              str.reverse();
              if(str.toString().equals(words[i]))
            {
                s=words[i];
                 break;
            }
            
        }
        System.out.println(s);
    }
}
