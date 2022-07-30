class ATwo {
    private ATwo() {
    }

    void msg() {
        System.out.println("hello java ");
    }

    public static void main(String args[]) {
        ATwo obj = new ATwo();
        obj.msg();
    }
}
