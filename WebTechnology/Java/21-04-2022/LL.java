//Q1-11

import java.util.*;

class LL {
    public static void main(String[] args) {
        LinkedList<String> lst = new LinkedList<String>();
        String str;
        lst.add("one");
        lst.add("two");
        lst.add("three");
        lst.add("four");
        lst.add("five");
        lst.add("six");
        System.out.println("The list is :" + lst);
        System.out.println();
        Iterator<String> itr = lst.iterator();
        while (itr.hasNext()) {
            str = itr.next();
            System.out.println(str + " ");
        }
        //
        System.out.println();
        Iterator p = lst.listIterator(3);
        while (p.hasNext()) {
            System.out.println(p.next());
        }
        //
        System.out.println();
        Iterator it = lst.descendingIterator();

        System.out.println("Elements in Reverse Order:");
        while (it.hasNext()) {
            System.out.println(it.next());
        }
        //
        System.out.println();
        lst.addFirst("start");
        lst.addLast("end");
        System.out.println("Final linked list:" + lst);
        //
        System.out.println();
        lst.offerFirst("first");
        lst.offerLast("last");
        System.out.println("Final linked list:" + lst);
        //
        System.out.println();
        LinkedList<String> new_lst = new LinkedList<String>();
        new_lst.add("new zero");
        new_lst.add("new seven");
        lst.addAll(1, new_lst);
        System.out.println(" new LinkedList:" + lst);
        //
        System.out.println();
        Object first_ele = lst.getFirst();
        System.out.println("First Element is: " + first_ele);
        Object last_ele = lst.getLast();
        System.out.println("Last Element is: " + last_ele);
        //
        System.out.println();
        for (int i = 0; i < lst.size(); i++) {
            System.out.println("Element at index " + i + ": " + lst.get(i));
        }
        //
        System.out.println();
        lst.remove(2);
        System.out.println("The New linked list: " + lst);
    }
}