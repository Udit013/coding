// Write a java program to create Account with 500 rupee minimum balance, deposit amount,
// withdraw amount and also throws LessBalanceException which returns the statement that says
// withdraw amount is not valid.

class LessBalanceException extends Exception {
    public LessBalanceException(String str) {
        super(str);
    }
}

public class Account {
    int balance, deposit, withdraw;

    Account(int balance, int deposit, int withdraw) {
        this.balance = balance;
        this.deposit = deposit;
        this.withdraw = withdraw;
    }

    void checkAccountValidity() {
        balance += deposit;
        try {
            if (balance < 500)
                throw new LessBalanceException("Account Balance less than 500");
            else if (balance < withdraw)
                throw new LessBalanceException("Unable to withdraw. Balance Less than withdrawal amount");
            else
                System.out.println("New balance = " + (balance - withdraw));
        } catch (LessBalanceException ble) {
            System.out.println(ble);
        }
    }

    public static void main(String[] args) {
        Account acc = new Account(000, 600, 700);
        acc.checkAccountValidity();
    }
}
