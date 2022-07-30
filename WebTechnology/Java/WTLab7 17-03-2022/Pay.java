import java.util.*;

interface Salary {
    double earnings();

    double deductions();

    double bonus();
}

abstract class Manager implements Salary {
    double basic;

    Manager(double base) {
        basic = base;
    }

    public double earnings() {
        double earning;
        earning = basic + (.80 * basic) + (.15 * basic);
        return earning;
    }

    public double deductions() {
        double deduction;
        deduction = (.12 * basic);
        return deduction;
    }

}

class Substaff extends Manager {

    Substaff(double base) {
        super(base);
    }

    public double bonus() {
        double bonus;
        bonus = (.50 * basic);
        return bonus;
    }
}

public class Pay {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the basic salary");
        double basicsal = sc.nextDouble();
        Substaff obj = new Substaff(basicsal);
        System.out.println("Earnings: " + obj.earnings());
        System.out.println("Deduction: " + obj.deductions());
        System.out.println("Bonus: " + obj.bonus());
        sc.close();
    }
}
