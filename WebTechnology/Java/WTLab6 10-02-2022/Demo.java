// Write a program in Java to create a class – Box with three data members
// (length, width, height) and a method volume (). Also implement the
// application class Demo where an object of the box class is created with
// user entered dimensions and volume is printed.

import java.util.*;

class Box {
    float length;
    float height;
    float width;

    Box(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    public float volume() {
        return length * width * height;
    }
}

public class Demo {
    public static void main(String[] args) {
        float length, height, width;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length:");
        length = sc.nextFloat();
        System.out.println("Enter the height:");
        height = sc.nextFloat();
        System.out.println("Enter the width:");
        width = sc.nextFloat();
        Box b = new Box(length, width, height);
        System.out.println("The volume is: " + b.volume());
        sc.close();
    }
}
