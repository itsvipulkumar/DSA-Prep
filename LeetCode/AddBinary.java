import java.lang.*;;
public class AddBinary {
    public static void main(String args[])
    {
        
            // The two input Strings, containing the binary representation of the two values:
               String input0 = "11";
               String input1 = "1";
               int sum=0;  
               int number0 = Integer.parseInt(input0, 2);
               int number1 = Integer.parseInt(input1, 2);
           
                sum = number0 + number1;
                System.out.println(Integer.toBinaryString(sum));
    

           
    }
}

// 10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101
// 110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011
