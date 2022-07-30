
interface Motor{
    final int cap=556;
    void run();
    void consume();

}

class WashingMachine implements Motor {
    public void run(){
        System.out.println("Run method");
    }
    public void consume(){
        System.out.println("Consume method");
   }

   public static void main(String[]args){
       WashingMachine obj= new WashingMachine();
       obj.run();
       obj.consume();
       System.out.println("Capacity is "+ cap);
   }
}


