
public class Outer {
    static class Inner1 {
        static void display() {
            System.out.println("static inner");
        }
    }

    class Inner2 {
        void display2() {
            System.out.println("non static class");
        }
    }

    public static void main(String[] args) {
        Outer.Inner1.display();
        Outer obj = new Outer();
        Inner2 i2 = obj.new Inner2();
        i2.display2();
    }
}
