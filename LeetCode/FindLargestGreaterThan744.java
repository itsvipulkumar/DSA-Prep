public class FindLargestGreaterThan744 {
    public static void main(String args[]) {
        char[] letters = { 'c', 'f', 'j' };
        char target = 'c';
        int flag=0;
        int ascii_target = (int) target;
        // System.out.println(ascii_target);
        for (int i = 0; i < letters.length; i++) {
            int ascii_letter = (int) letters[i];
            if (ascii_letter > ascii_target) {
               flag=ascii_letter;
                break;
            }
            // System.out.println(ascii_letter);
        }
        char asciiToChar = (char) flag;
        System.out.println(asciiToChar);

    }
}