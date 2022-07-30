// Write a program to create an Account class containing acc_no, balance
// as data members and disp() to display the details. Inherit it in Person
// class with all mentioned data members and functions. Person class also
// has name and aadhar_no as extra data members of its own. Override disp()
// function. Create 5 persons‟ details.

class Account {
    long accountNumber;
    double balance;

    Account(long an, double b) {
        accountNumber = an;
        balance = b;
    }

    void display() {
        System.out.println("Account number = " + accountNumber);
        System.out.println("Balance = " + balance);
    }
}

class Person extends Account {
    String name;
    String aadhaar;

    Person(long an, double b, String name, String aadhaar) {
        super(an, b);
        this.name = name;
        this.aadhaar = aadhaar;
    }

    void display() {
        System.out.println("Name : " + name);
        System.out.println("Account : " + accountNumber);
        System.out.println("Aadhaar : " + aadhaar);
        System.out.println("Balance : " + balance);
    }
}

public class Bank {

    public static void main(String[] args) {
        Person p1 = new Person(1111, 118786.232, "Alice", "26381368");
        Person p2 = new Person(2222, 56826.232, "Bob", "3476348");
        Person p3 = new Person(3333, 7896.232, "James", "874512785421");
        Person p4 = new Person(4444, 10786.232, "Katie", "9879381368");
        Person p5 = new Person(4444, 77686.232, "Ron", "512781263");

        p1.display();
        p2.display();
        p3.display();
        p4.display();
        p5.display();

    }

}