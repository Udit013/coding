

interface Transaction {
    void deposit(int a, int b);

    void withdraw(int a, int b);
}

class HDFC implements Transaction {
    public void deposit(int a, int b) {
        System.out.println("deposit methos");
    }

    public void withdraw(int a, int b) {
        System.out.println("withdraw");
    }
}

class ICICI implements Transaction {
    public void deposit(int a, int b) {
        System.out.println("i deposit methos" + a + b);
    }

    public void withdraw(int a, int b) {
        System.out.println("i withdraw:" + a + b);
    }
}

public class Bankin {
    public static void main(String[] args) {
        HDFC ob = new HDFC();
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);

        ob.deposit(a, b);
        ob.withdraw(a, b);
        ICICI ob2 = new ICICI();
        ob2.deposit(a, b);

        ob2.withdraw(a, b);
    }
}
