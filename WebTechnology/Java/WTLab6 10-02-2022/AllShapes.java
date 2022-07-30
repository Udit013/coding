
// Write a program in java to define a class Shape which has data member
// „area‟ and a member function showArea(). Derive two classes Circle and
// Rectangle from Shape class. Add appropriate data members and member
// functions to calculate and display the area of Circle and Rectangle.

class Shape {
    double area;

    Shape(double area) {
        this.area = area;
    }

    void showArea() {
        System.out.println("Area = " + area);
    }

}

class Circle extends Shape {

    Circle(double area) {
        super(area);
    }

}

class Rectangle extends Shape {

    Rectangle() {
        super(13);
    }

}

public class AllShapes {
    public static void main(String[] args) {
        Circle c = new Circle(55.6);
        Rectangle r = new Rectangle();

        c.showArea();
        r.showArea();
    }
}