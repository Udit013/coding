
// A subclass exception must appear before super-class exception. Justify this  with suitable Java program

import java.io.*;

class Parent {

    void msg() throws Exception {
        System.out.println("parent");
    }

}

class SubclassException extends Parent {

    void msg() {
        System.out.println("child");
    }

    public static void main(String args[]) {

        Parent p = new SubclassException();

        try {

            p.msg();

        } catch (Exception e) {
        }

    }
}