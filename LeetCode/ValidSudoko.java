import java.lang.*;
import java.util.*;

public class ValidSudoko {
    public static void main(String args[]) {
        char[][] board = {

                { '8', '3', '.', '.', '7', '.', '.', '.', '.' },
                { '6', '.', '.', '1', '9', '5', '.', '.', '.' },
                { '.', '9', '1', '.', '.', '.', '.', '6', '.' },
                { '8', '.', '.', '.', '6', '.', '.', '.', '3' },
                { '4', '.', '.', '8', '.', '3', '.', '.', '1' },
                { '7', '.', '.', '.', '2', '.', '.', '.', '6' },
                { '.', '6', '.', '.', '.', '.', '2', '8', '.' },
                { '.', '.', '.', '4', '1', '9', '.', '.', '5' },
                { '.', '.', '.', '.', '8', '.', '.', '7', '9' },

        };
        int n = 9;
        int c = 0;
        int Crow = 0, Ccol = 0, Ccube = 0;
        int val = 0;
        Set<Character> set = new HashSet<Character>();
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[0].length; j++) {
                char ch = board[i][j];
                if (Character.isDigit(ch) == true) {
                    c++;
                    set.add(ch);
                }

            }
            if (set.size() == c) {
                Crow++;
                set.clear();
                c = 0;
            }
        }
        if(Crow!=9)
        {
            System.out.println("Invalid Row");
        }
        else if(Crow == 9) {
            val++;
            for (int i = 0; i < board.length; i++) {
                for (int j = 0; j < board[0].length; j++) {
                    char ch = board[j][i];
                    if (Character.isDigit(ch) == true) {
                        c++;
                        set.add(ch);
                    }

                }
                if (set.size() == c) {
                    Ccol++;
                    set.clear();
                    c = 0;
                }
            }
        }

        if (Ccol!= 9) {
           // val++;
            System.out.println("InValid Col ");
        }

        // System.out.println("InValid");

        // for cube constion
        c = 0;
        set.clear();
        int a = 0;
        int b = 0;

        for (int k = 1; k <= 3; k++) {

            /// a=0;
            if (k <= 3) {
                for (int i = a; i < (n / 3 + a); i++) {
                    for (int j = b; j < (n / 3 + b); j++) {
                        char ch = board[j][i];
                        if (Character.isDigit(ch)) {
                            c++;
                            set.add(ch);
                        }
                    }

                }

                if (set.size() == c) {
                    Ccube++;
                }
                a = a + 3;
                c = 0;
                set.clear();

            }

            // a=0;

        }
        a = 0;
        for (int k = 0; k < 3; k++) {
            b = 3;
            for (int i = a; i < (n / 3 + a); i++) {
                for (int j = b; j < (n / 3 + b); j++) {
                    char ch = board[j][i];
                    if (Character.isDigit(ch)) {
                        c++;
                        set.add(ch);
                    }
                }

            }

            if (set.size() == c) {
                Ccube++;
            }
            a = a + 3;
            c = 0;
            set.clear();
        }
        a = 0;
        for (int k = 0; k < 3; k++) {
            b = 6;
            for (int i = a; i < (n / 3 + a); i++) {
                for (int j = b; j < (n / 3 + b); j++) {
                    char ch = board[j][i];
                    if (Character.isDigit(ch)) {
                        c++;
                        set.add(ch);
                    }
                }

            }

            if (set.size() == c) {
                Ccube++;
            }
            a = a + 3;
            c = 0;
            set.clear();
        }
if(Ccube!=9)
{
    System.out.println("Invalid Cube");
}
else 
{
    System.out.println("Valid Cube");
}
        // System.out.println(Ccube);
        // for (int i = 4; i < 6; i++) {
        // for (int j = 0; j < 3; j++) {
        // char ch = board[i][j];
        // if (Character.isDigit(ch)) {
        // c++;
        // set.add(ch);
        // }
        // }

        // }
        // for (int i = 7; i < 9; i++) {
        // for (int j = 0; j < 3; j++) {
        // char ch = board[i][j];
        // if (Character.isDigit(ch)) {
        // c++;
        // set.add(ch);
        // }
        // }

        // }
        // if (c == set.size()) {
        // val++;
        // }
        // if (val == 3) {
        // System.out.println("Valid");

        // } else
        // System.out.println("Invalid");

        // System.out.println(set);
        // System.out.println(c);
    }
}

// b = b + 3;
// for (int i = a; i < (n / 3 + a); i++) {
// for (int j = b; j < (n / 3 + b); j++) {
// char ch = board[j][i];
// if (Character.isDigit(ch)) {
// c++;
// set.add(ch);
// }
// }

// }

// if (set.size() == c) {
// Ccube++;
// }
// a = a + 3;
// c = 0;
// set.clear();
