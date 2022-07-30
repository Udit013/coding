// Write a program in java
// using inheritance to show how to call the base class parameterized
// constructors from the derived class using super.

class Base {
    int num;

    Base(int n) {
        num = n;
    }

    void showSquare() {
        System.out.println("Square of " + num + " = " + num * num);
    }
}

public class Derived extends Base {
    Derived() {
        super(5);
    }

    public static void main(String[] args) {
        Derived d = new Derived();
        d.showSquare();
    }
}
