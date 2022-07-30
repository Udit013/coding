package marketing;
 
import general.*;
 
class Sales extends Employee {
 
   Sales(int id, String name, int salary) {
       super(id, name, salary);
   }
 
   double tallowance() {
       return 0.05 * earnings();
   }
}
 
public class Pay {
 
   public static void main(String[] args) {
       Sales s = new Sales(2005556, "Udit", 3000);
 
       System.out.println("Travel allowance = " + s.tallowance() + " for Emp Id = " + s.getEmpId() + " with name = " + s.getName());
   }
}
