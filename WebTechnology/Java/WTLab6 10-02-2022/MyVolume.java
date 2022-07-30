// Write a program in
// Java to create a class MyVolume with required data members and find the
// volume of cube, cuboid and sphere using constructor overloading

import java.util.*;

public class MyVolume {
    float length;
    float height;
    float width;
    double radius;
    float side;

    MyVolume(float s) {
        side = s;
    }

    MyVolume(double r) {
        radius = r;
    }

    MyVolume(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    public float volumeCube() {
        return (side * side * side);
    }

    public double volumeSphere() {
        return (4 / 3 * 22 / 7 * radius * radius * radius);
    }

    public float volumeCuboid() {
        return (length * width * height);
    }

    public static void main(String[] args) {

        float length;
        float height;
        float width;
        double radius;
        float side;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the side of Cube:");
        side = sc.nextFloat();
        MyVolume cube = new MyVolume(side);
        System.out.println("Volume of Cube = " + cube.volumeCube());

        System.out.println("Enter the radius of Sphere:");
        radius = sc.nextDouble();
        MyVolume sphere = new MyVolume(radius);
        System.out.println("Volume of Sphere = " + sphere.volumeSphere());

        System.out.println("Enter the length of Cuboid:");
        length = sc.nextFloat();
        System.out.println("Enter the width of Cuboid:");
        width = sc.nextFloat();
        System.out.println("Enter the height of Cuboid:");
        height = sc.nextFloat();
        MyVolume cuboid = new MyVolume(length, width, height);
        System.out.println("Volume of Cuboid = " + cuboid.volumeCuboid());

        sc.close();
    }

}
