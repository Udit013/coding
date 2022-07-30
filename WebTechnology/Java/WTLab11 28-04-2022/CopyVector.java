import java.util.*;

public class CopyVector {
    public static void main(String[] args) {
        Vector<String> v1 = new Vector<String>();
        Vector<String> v2 = new Vector<String>();
        v1.add("A");
        v1.add("B");
        v1.add("C");
        v1.add("D");
        System.out.println("Before executing the addAll() method");
        System.out.println("v1: " + v1);
        System.out.println("v2: " + v2);
        v2.addAll(v1);
        System.out.println("After executing the addAll() method");
        System.out.println("v1: " + v1);
        System.out.println("v2: " + v2);
    }
}
