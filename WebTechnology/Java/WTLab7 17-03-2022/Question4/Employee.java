package general;
 
public class Employee {
   protected int empid;
   private String ename;
 
   int baseSalary;
 
   public Employee(int id, String name, int salary) {
       empid = id;
       ename = name;
       baseSalary = salary;
   }
 
   public int getEmpId(){
       return empid;
   }
 
   public String getName(){
       return ename;
   }
 
   public double earnings() {
       return baseSalary + 0.8 * baseSalary + 0.15 * baseSalary;
   }
}
