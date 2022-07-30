
abstract class Student {
    int roll;
    int regno;

    abstract void course();

}

class Kiitian extends Student {
    void course() {
        System.out.println("Implementation of Anstract method");
    }
}

public class AbstractDemo {
    public static void main(String[] args) {
        Kiitian obj = new Kiitian();
        obj.course();
    }
}