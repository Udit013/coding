import java.util.PriorityQueue;
public class PQueue {
  public static void main(String[] args) {
  PriorityQueue<String> queue=new PriorityQueue<String>();  
  queue.add("Pen");
  queue.add("Pencil");
  queue.add("Eraser");
  queue.add("Sharpner");
  queue.add("Ruler");
  System.out.println("Elements of the Priority Queue: ");
  System.out.println(queue);
 }
}