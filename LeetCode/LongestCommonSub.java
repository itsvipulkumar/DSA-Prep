import java.lang.*;
import java.util.*;
public class LongestCommonSub {
    public static void main(String args[])
    {
        String str[]={"flower","flow","floight"};
        
        String newstr2="";
        String str2=str[0];
        int flag=0;
        // System.out.println(str2);
        int len=str.length;
        char ch=str2.charAt(0);
        String newstr=String.valueOf(ch);

        System.out.println(ch);
        System.out.println(newstr);
        for(int i=1;i<str2.length();i++)
        {
               
               flag=0;
             for(int j=0;j<str.length;j++)
             {
                
                boolean x= str[j].startsWith(newstr);
                if(x==true)
                {
                    //   newstr=newstr+st;
                    flag++;
                }
                else
                {
                    break;
                }
                
             }

               if(flag==len)
                {
                      
                }
                
                 ch=str2.charAt(i);
               String st=String.valueOf(ch);
               newstr=newstr+st;
            //  newstr2=newstr;
            //     newstr="";
        }
        System.out.println(newstr2);
    }
}
