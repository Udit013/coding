import java.util.*;

public class Iterate {
    public static void main(String[] args) {
        Vector<String> v1 = new Vector<String>();
        v1.add("A");
        v1.add("B");
        v1.add("C");
        v1.add("D");
        for (int i = v1.size() - 1; i >= 0; i--) {
            System.out.println(v1.get(i));
        }
    }
}