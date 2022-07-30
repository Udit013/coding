import java.util.*;

class BankAccount {
    double bal;
    long accnum;
    String name;
    

    BankAccount(long ac, String s, double b) {
        accnum = ac;
        name = s;
        bal = b;
    }

    void display() {
        System.out.println("Account number: " + accnum);
        System.out.println("Name: " + name);
        System.out.println("balance: " + bal);
    }
}

public class Banking extends BankAccount {

    Banking(long ac, String s, double b) {
        super(ac, s, b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name: ");
        String s1 = sc.next();
        System.out.println("Enter account number and balance: ");
        long a1 = sc.nextLong();
        double b1 = sc.nextDouble();

        BankAccount account1 = new Banking(a1, s1, b1);

        System.out.println("Enter name: ");
        String s2 = sc.next();
        System.out.println("Enter account number and balance: ");

        long a2 = sc.nextLong();
        double b2 = sc.nextDouble();

        BankAccount account2 = new Banking(a2, s2, b2);

        System.out.println("\nDisplaying account details: \n");
        account1.display();
        System.out.println();
        account2.display();

        System.out.println("\nAccount with higher balance: ");
        if (account1.bal > account2.bal)
            account1.display();
        else
            account2.display();
            sc.close();
    }
}
