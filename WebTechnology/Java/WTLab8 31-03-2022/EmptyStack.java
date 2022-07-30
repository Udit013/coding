// Write a java program to implement a stack class having methods push () and pop(). These
// methods must be designed to throw user defined exception when the stack is empty or full.

class Stack {
    int size = 0;
    int top = 0;
    int data[];

    Stack(int s) {
        size = s;
        data = new int[size];
    }

    void push(int d) throws StackException {
        if (top == size) {
            throw new StackException("Stack Full");
        }
        data[top++] = d;
    }

    int pop() throws StackException {
        if (top == 0) {
            throw new StackException("Stack empty");
        }
        return data[--top];
    }
}

class StackException extends Exception {
    StackException(String s) {
        super(s);
    }
}

public class EmptyStack {
    public static void main(String[] args) throws StackException {
        try {

            Stack s = new Stack(6);
            for (int i = 0; i < 6; i++)
                s.push(i);

            for (int i = 0; i < 8; i++)
                System.out.println(s.pop());

        } catch (

        StackException e) {
            System.out.println(e);
        }
    }

}
