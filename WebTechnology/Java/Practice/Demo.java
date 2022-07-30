interface PersonalLoan {
    float findInterest(float bal, int year);
}

class Bank1 implements PersonalLoan {
    static float r1 = 5.0f;

    public float findInterest(float bal, int year) {
        float a, i;
        a = bal*(1 + (r1 * year));
        i = a - bal;
        return i;
    }
}

class Bank2 implements PersonalLoan {
    static float r2 = 6.0f;

    public float findInterest(float bal, int year) {
        float a, i;
        a = bal*(1 + (r2 * year));
        i = a - bal;
        return i;
    }
}

class Demo {
    public static void main(String[] args) {

        PersonalLoan a = new Bank1();
        System.out.println("Bank2: " + a.findInterest(2300.0f, 3));
        PersonalLoan b = new Bank2();
        System.out.println("Bank2: " + b.findInterest(4500.0f, 2));
    }
}