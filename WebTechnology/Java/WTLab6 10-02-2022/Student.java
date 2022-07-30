
// Write a program in
// java to input the details of a student having roll, name, full_mark and
// secured_mark as data members using constructor, then calculate the CGPA
// and display the details of student with CGPA.
import java.util.*;

public class Student {
    int roll;
    String name;
    double full;
    double secured;

    Student(int r, double f, double s, String n) {
        name = n;
        roll = r;
        full = f;
        secured = s;
    }

    public double cgpa(double f, double s) {
        return ((s * 1.0) / f) * 100;
    }

    public static void main(String[] args) {
        int roll;
        String name;
        double full;
        double secured;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Student name: ");
        name = sc.next();
        System.out.println("Enter Student roll no: ");
        roll = sc.nextInt();
        System.out.println("Enter Full marks: ");
        full = sc.nextDouble();
        System.out.println("Enter Secured marks: ");
        secured = sc.nextDouble();
        Student obj = new Student(roll, full, secured, name);
        System.out.println("The CGPA is: " + obj.cgpa(full, secured));
        sc.close();

    }
}
