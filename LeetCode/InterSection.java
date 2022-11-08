import java.util.Vector;
public class Demo {
   public static void main(String args[]) {
      Vector vec = new Vector(5);
      vec.add(4);
      vec.add(1);
      vec.add(7);
      vec.add(9);
      vec.add(2);
      vec.add(8);
      System.out.println("The Vector elements are: " + vec);
      System.out.println("The index of element 9 in Vector is: " + vec.indexOf(9));
      System.out.println("The index of element 5 in Vector is: " + vec.indexOf(5));
   }
}