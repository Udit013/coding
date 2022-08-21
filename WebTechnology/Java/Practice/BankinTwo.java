import java.util.Scanner;

class NegativeAmountException extends Exception{
    public NegativeAmountException(String s){
        super(s);
    }
}

class Bank{
    int deposit(int bal,int ra){
        int ans=bal+ra;
        return ans;
    }
    int withdraw(int bal,int ra){
        int ans=bal-ra;
        return ans;
    }
}
public class BankinTwo {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        Bank b=new Bank();
        System.out.println("enter balance");
        int bal=sc.nextInt();
        System.out.println("enter raise/cut");
        int r=sc.nextInt();
        try{
            if(r<0){
                throw new NegativeAmountException("negative");
            }
            else {
                    System.out.println("the withdrawn"+ b.withdraw(bal,r));
                    System.out.println("the deposit"+ b.deposit(bal,r));
                    
            }
        }
        catch (Exception e){
            System.out.println(e);
        }
        sc.close();
    }
    
}
