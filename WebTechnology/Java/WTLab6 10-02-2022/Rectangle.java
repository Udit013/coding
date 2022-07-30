
// Write a program in Java to define a
// class Rectangle having data member: length and breadth; to calculate the
// area and perimeter of the rectangle. Use constructor to read, and
// member functions to calculate and display.

import java.util.*;

public class Rectangle {
    float length;
    float width;

    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    public float area() {
        return length * width;
    }

    public float perimeter() {
        return 2 * (length + width);
    }

    public static void main(String[] args) {
        float length, width;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length:");
        length = sc.nextFloat();
        System.out.println("Enter the width:");
        width = sc.nextFloat();
        Rectangle obj = new Rectangle(length, width);
        System.out.println("The area is: " + obj.area());
        System.out.println("The perimeter is: " + obj.perimeter());
        sc.close();
    }
}
