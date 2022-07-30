//Q12-Q26

import java.util.*;

class LLTwo {
    public static void main(String[] args) {
        LinkedList<String> lst = new LinkedList<String>();
        lst.add("one");
        lst.add("two");
        lst.add("three");
        lst.add("four");
        lst.add("five");
        lst.add("six");
        System.out.println("The Original linked list: " + lst);
        Object firstElement = lst.removeFirst();
        System.out.println("Element removed: " + firstElement);
        Object lastElement = lst.removeLast();
        System.out.println("Element removed: " + lastElement);
        System.out.println("The New linked list: " + lst);
        // Remove all the elements
        // System.out.println();
        // lst.clear();
        // System.out.println("The New linked list: " + lst);
        //
        System.out.println();
        Collections.swap(lst, 1, 3);
        System.out.println("The New linked list after swap: " + lst);
        //
        System.out.println();
        Collections.shuffle(lst);
        System.out.println("Linked list after shuffling:\n" + lst);
        //
        System.out.println();
        LinkedList<String> lst2 = new LinkedList<String>();
        lst2.add("I");
        lst2.add("II");
        lst2.add("III");
        lst2.add("IV");
        System.out.println("List of second linked list: " + lst2);
        LinkedList<String> a = new LinkedList<String>();
        a.addAll(lst);
        a.addAll(lst2);
        System.out.println("New linked list: " + a);
        //
        System.out.println();
        LinkedList<String> new_a = new LinkedList<String>();
        new_a = (LinkedList) a.clone();
        System.out.println("Cloned linked list: " + new_a);
        //
        System.out.println();
        System.out.println("Removed element: " + new_a.pop());
        //
        System.out.println();
        String f = new_a.peekFirst();
        System.out.println("First element in the list: " + f);
        //
        System.out.println();
        String l = new_a.peekLast();
        System.out.println("Last element in the list: " + l);
        //
        System.out.println();
        if (new_a.contains("Ten")) {
            System.out.println("Color Green is present in the linked list.");
        } else {
            System.out.println("Color Green is not present in the linked list.");
        }
        if (new_a.contains("III")) {
            System.out.println("Color Orange is present in the linked list.");
        } else {
            System.out.println("Color Orange is not present in the linked list.");
        }
        //
        System.out.println();
        List<String> list = new ArrayList<String>(new_a);
        for (String str : list) {
            System.out.println(str);
        }
        //
        System.out.println();
        LinkedList<String> lst3 = new LinkedList<String>();
        for (String c : lst2)
            lst3.add(lst2.contains(c) ? "Yes" : "No");
        System.out.println(lst3);
        //
        System.out.println();
        System.out.println("Check the above linked list is empty or not! " + lst2.isEmpty());
        lst2.removeAll(lst2);
        System.out.println("Linked list after remove all elements " + lst2);
        System.out.println("Check the above linked list is empty or not! " + lst2.isEmpty());
        //
        System.out.println();
        new_a.set(1, "fifty");
        System.out.println("The value of second element changed.");
        System.out.println("New linked list: " + new_a);
    }
}
